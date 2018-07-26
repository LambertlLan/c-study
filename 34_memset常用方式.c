#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int a[10] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(a[0]) = %d\n", sizeof(a[0]));
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    //memset用于清空数组内元素
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    char str[10];
    memset(str, 'a', sizeof(str));
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = %c\n", i, str[i]);
    }
    return 0;
}
