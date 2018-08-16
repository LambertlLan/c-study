#include <stdio.h>
#include <stdlib.h>

//指针函数
int *fun1()
{
    int *p = (int *)malloc(sizeof(int));
    return p;
}
int fun(int p)
{
    printf("%d\n", p);
    return 0;
}
int main(int argc, char const *argv[])
{
    //函数指针,它是指针,指向函数的指针
    //定义函数指针变量有三种方式
    //1.先定义函数类型,根据类型定义指针变量
    //有typedef事类型,,没有是变量
    typedef int FUN(int a); //FUN函数类型
    FUN *p1 = NULL;
    p1 = fun; //p1 指向fun函数
    fun(5);
    p1(6);
    //2.先定义函数指针类型,根据类型定义指针变量(常用)
    typedef int (*PFUN)(int a); //PFUN,函数指针类型
    PFUN p2 = fun;              //p2指向fun
    p2(7);
    //3.直接定义函数指针(常用)
    int (*p3)(int a) = fun;
    p3(8);

    int (*p4)(int a);
    p4 = fun;
    p4(9);

    /* code */
    return 0;
}
