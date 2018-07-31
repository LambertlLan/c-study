#include <stdio.h>
#include <string.h>

void write_file()
{
    FILE *fp = fopen("文件四则运算.txt", "w");
    fputs("10+10=\n", fp);
    fputs("10*10=\n", fp);
    fputs("10/10=\n", fp);
    fputs("10-10=\n", fp);
    fclose(fp);
    fp = NULL;
}

int calc(int a, int b, char ch)
{

    switch (ch)
    {
    case '/':
        return a / b;
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;

    default:
        return 0;
    }
}

void caculate()
{
    FILE *fp = fopen("caculate.txt", "r");
    char buf[100];
    char temp[1024];
    while (1)
    {
        int a, b;
        char ch;
        fgets(buf, sizeof(buf), fp);
        if (feof(fp))
        {
            break;
        }
        sscanf(buf, "%d%c%d=\n", &a, &ch, &b);
        sprintf(buf, "%d%c%d=%d\n", a, ch, b, calc(a, b, ch));
        strcat(temp, buf);
    }
    fclose(fp);
    fp = NULL;
    FILE *wp = fopen("caculate_result.txt", "w");
    fputs(temp, wp);
    fclose(wp);
    wp = NULL;
    printf("%s", temp);
}

int main(int argc, char const *argv[])
{
    // write_file();
    caculate();
    return 0;
}
