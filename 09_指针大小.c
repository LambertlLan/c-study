#include <stdio.h>

int main(int argc, char const *argv[])
{
    //1. 32位的编译器用32位大小(4字节)保存地址
    //2. 64位的编译器用64位大小(8字节)保存地址
    int a = sizeof(int *);
    int b = sizeof(char *);
    double *******************p;
    int c = sizeof(p);

    printf("a = %d,b = %d,c = %d", a, b, c);
    return 0;
}
