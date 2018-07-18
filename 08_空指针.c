#include <stdio.h>

int main(int argc, char const *argv[])
{

    /**
     * 避免出现段错误的情况
     **/
    int *p = NULL;

    int a = 123;
    p = &a;

    if (p != NULL)
    {
        *p = 100;
    }
    printf("a = %d\n", a);
    printf("p = %p\n", p);
    return 0;
}
