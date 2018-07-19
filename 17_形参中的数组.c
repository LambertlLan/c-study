#include <stdio.h>
// 1.形参中的数组,不是数组,是普通指针变量
// 2.形参数组:int a[100],int a[], int *a对编译器而言没有任何区别
// 3.编译器都是当做int * 处理
void print_array(int a[], int n)
{
    //64位编译器,sizeof(a),a是指针,所以为8,32位为4
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, -2, -3, -4, -5};
    int n = sizeof(a) / sizeof(a[0]);
    print_array(a, n);
    return 0;
}
