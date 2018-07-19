#include <stdio.h>

int *fun()
{
    int a;
    //linux64位的gcc,不允许返回局部变量的地址
    //windows段错误
    //当函数执行完毕后,fun()内部的a自动释放
    return &a;
}

int main(int argc, char const *argv[])
{
    int *p = NULL;

    p = fun(); //接收函数返回的地址
    *p = 100;  //操作指针指向的内存
    return 0;
}
