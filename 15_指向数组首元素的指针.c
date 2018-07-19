#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = NULL;
    p = a;
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", a[i]);
        printf("%d, ", *(a + i));
        printf("%d, ", *(p + i));
        //p[i] 等价于*(p+i),操作都是指针所指向的内存
        printf("%d, ", p[i]);
    }

    return 0;
}
