#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int *p = (int *)123;
    printf("p = %p\n", p);
    printf("a = %d\n", a);
    p = &a;
    *p = 100;
    printf("p = %d\n", *p);
    printf("a = %d\n", a);
    return 0;
}
