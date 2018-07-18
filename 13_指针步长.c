#include <stdio.h>

int main(int argc, char const *argv[])
{
    //1.指针的加法不是传统的加法
    //2.步长由指针指向的数据类型决定
    int a;
    int *p = &a;
    printf("p:%d,p+1:%d\n", p, p + 1);

    char b;
    char *q = &b;
    printf("q:%d,q+1:%d\n", q, q + 1);
    //输出
    // p:6422308,p+1:6422312
    // q:6422307,q+1:6422308
    return 0;
}
