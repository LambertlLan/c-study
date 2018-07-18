#include <stdio.h>
/**
 * 1.指针变量也是一个变量,是变量就可以赋值 
 * 2.指针指向谁,就把谁的地址赋给指针
 * 3.*p操作的是指针所指向内存
 **/

int main(int argc, char const *argv[])
{
    int ***************p;
    p = 0x1122;

    int ****************q;
    q = &p;

    *q = 0xaabb;
    printf("p=%x\n", p);

    //此处导致段错误
    *p = 0xbbcc;
    return 0;
}
