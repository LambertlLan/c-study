#include <stdio.h>

int main(int argc, char const *argv[])
{

    FILE *fp = fopen("12.txt", "w");
    fputs("这是最后一天", fp);
    //1. 默认情况,程序没有结束,也没用关闭文件缓冲区满,自动刷新缓冲区
    //2.文件正常关闭,缓冲区的内容也会写入文件
    //fclose(fp)
    //3.文件不关闭,程序没有结束,实时刷新,调用fflush
    //fflush(fp);
    //程序正常关闭,缓冲区的内容也会写入文件
    return 0;
}
