#include <stdio.h>

void swap(int m, int n)
{

    int temp;
    temp = m;
    m = n;
    n = temp;
    printf("m = %d,n = %d\n", m, n);
}

void swap_p(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    //值传递,不改变原始值
    swap(a, b);
    printf("a = %d,b = %d\n", a, b);
    //地址传递
    swap_p(&a, &b);
    printf("a = %d,b = %d\n", a, b);
    return 0;
}

