#include <stdio.h>

void fun()
{
    //如果全局变量再调用的后面需要先声明和函数相同
    extern int a;
    printf("a = %d", a);
}

int a = 10;

int main(int argc, char const *argv[])
{
    fun();
    return 0;
}
