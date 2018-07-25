#include <stdio.h>

static void fun()
{
    //静态函数
    //静态函数只能在本文件使用
    //一个文件可以有一个static函数的定义
}

void fun()
{
    //普通函数
    //1.普通函数所以文件都能调用
    //2.所以文件只能有一次普通函数的定义
}

int main(int argc, char const *argv[])
{

    return 0;
}
