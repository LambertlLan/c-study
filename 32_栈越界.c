#include <stdio.h>

int main(int argc, char const *argv[])
{
    //栈区分配很大的内存,越界了
    int a[10000000000000] = {0};
    return 0;
}
