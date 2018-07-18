#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p;
    p = 0x1234;
    printf("p=%d\n", p);
    //如果有未授权内存的地址刚好为0x1234,*p会出现段错误,即为非法操作内存
    *p = 100;
    return 0;
}
