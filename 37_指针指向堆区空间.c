#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *p;
    //malloc返回为void*类型,在c++中需要强制转换类型(int *)

    //1.参数是指定堆区分配多大的空间
    //2.返回值:成功就是堆区空间首元素地址
    //3.失败返回NULL
    //malloc(sizeof(int));
    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("分配失败");
        return -1;
    }
    *p = 10;
    printf("*p = %d\n", *p);
    //1.动态分配的空间,如果程序没有结束,不会自动释放
    //2.一般使用完,需要人为释放,free(p);
    //3.free(p),不是释放p变量,释放p所指向的内存
    //4.同一块堆区内存只能释放一次
    //5.释放后这块内存被系统回收,再用就是操作野指针
    free(p);
    return 0;
}