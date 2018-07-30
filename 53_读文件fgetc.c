#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("b.txt", "r");
    if (fp == NULL)
    {
        perror("fopen");
        return -1;
    }
    char ch;
    //读文件,每次读一个字符

    while (1)
    {
        ch = fgetc(fp);
        //如果是文本文件,通常以-1(EOF)判断文件是否结尾
        //如果是二进制文件,不能以-1判断文件结尾,使用feof()
        if (ch == EOF) //EOF宏定义等于-1
        {
            printf("%d", ch);
            break;
        }
        printf("%c\n", ch);
    }
    fclose(fp);
    return 0;
}
