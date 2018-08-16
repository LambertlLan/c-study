#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

void fun(int x, int y, int (*p)(int a, int b))
{
    int a = p(x, y);
    printf("a = %d\n", a);
}
int main(int argc, char const *argv[])
{
    fun(1, 2, add);
    return 0;
}
