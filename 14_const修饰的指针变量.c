#include <stdio.h>

int main(int argc, char const *argv[])
{
    //const修饰* ,代表指针所指向的内存是只读
    const int *p2 = &a;
    //*p2为只读
    //*p2 = 100; //err
    p2 = NULL; //ok

    //const 修饰*,代表指针所指向的内存是只读
    int const *p3 = &a;
    //*p3 = 100; //err
    p3 = NULL;

    //const 修饰指针变量,代表指针变量的值为只读
    int *const p4 = &a;
    *p4 = 100; //ok
    //p4 = NULL;//err

    const int *const p5 = &a;
    return 0;
}
