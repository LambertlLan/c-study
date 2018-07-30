#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    FILE *p = fopen(argv[1], "w");
    char buf[1024];
    while (1)
    {
        //遇到换行符会结束
        //指针为标准输入
        fgets(buf, sizeof(buf), stdin);
        if (strncmp(buf, ":wq", 3) == 0)
        {
            break;
        }
        fputs(buf, p);
    }

    fclose(p);
    return 0;
}
