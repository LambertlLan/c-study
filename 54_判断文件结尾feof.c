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
        //如果到文件结尾,返回真
        //如果没有对文件进行读操作,直接调用次函数,永远返回假
        //必须先读,再调用feof()才有意义,因为光标不会自动向后移动
        //必须读取完成才能判断是否结束
        if (feof(fp))
        {
            printf("%d", ch);
            break;
        }
        printf("%c\n", ch);
    }
    fclose(fp);
    return 0;
}
