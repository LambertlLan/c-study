#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    //打开成功,返回有效地址
    //打开失败,返回NULL
    //"w",如果文件不存在,新建,如果存在,清空内容再打开
    //"r",如果文件不存在,打开失败
    //"a",如果文件不存在,新建,如果存在光标自动放在文件末尾
    fp = fopen("./b.txt", "r");
    if (fp == NULL)
    {
        perror("fopen");
    }
    return 0;
}
