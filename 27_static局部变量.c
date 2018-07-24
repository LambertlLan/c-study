#include <stdio.h>

void static_fun()
{
    //1.在编译阶段已经分配空间,函数没有调用前已经存在
    //2.当离开{},static局部变量不会释放,只有程序结束,static才自动释放
    //3.如果static不初始化,他的值默认为0
    //4.存入data区
    static int i = 0;
    i++;
    printf("static_fun i = %d\n", i);

    //5.static只能用于常量初始化
    int a = 10;
    //static int j = a; //err ,static分配变量时a还不存在,编译出错
}

int main(int argc, char const *argv[])
{
    static_fun();
    static_fun();
    static_fun();
    return 0;
}
