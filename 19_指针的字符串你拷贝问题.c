#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *p;
    // 1.不是给p变量拷贝内容
    // 2.给p所指向的内存拷贝内容
    // 3.p是野指针,给野指针所指向的内存拷贝内容,结果导致段错误
    strcpy(p, "hello mike abc");
    return 0;
}
