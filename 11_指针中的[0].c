#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = &a;
    //通过指针间接操作a的内存
    *p = 111;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    // *p 等价于*(p+0),同时等价于p[0]
    printf("p[0] = %d\n", p[0]);
    //*p 等价于 p[0],操作的是指针所指向的内存
    p[0] = 250;
    printf("a2 = %d\n", a);

    //p[1] = 111; //操作野指针所指向的内存
    //等价于 *(p+1) = 111;
    return 0;
}
