#include <stdio.h>
#include <stdlib.h>

void fun(int **temp)
{
    *temp = (int *)malloc(sizeof(int));
    **temp = 100;
}
int *fun2()
{
    int *tmp = NULL;
    tmp = (int *)malloc(sizeof(int));
    *tmp = 100;
    return tmp;
}

int main(int argc, char const *argv[])
{
    int *p = NULL;
    // fun(&p); //再fun函数内部动态分配空间
    p = fun2();
    printf("*p = %d\n", *p);
    printf("&p = %p\n", p);
    int *p1 = fun2();
    printf("*p1 = %d\n", *p1);
    printf("&p1 = %p\n", p1);

    return 0;
}
