#include <stdio.h>
static int a = 0;
int b = 0;
//1.static全局变量和普通全局变量的区别就是作用域不一样(文件作用域)
//2.extern关键字只适用于普通全局变量
//3.普通全局变量,所以文件都能使用,前提是需要声明
//4.static全局变量只能在本文件使用,别的文件不能使用
//5.不同文件只能出现一个普通全局变量的定义
//6.一个文件只能有一个static全局变量的定义,不同文件间的static全局变量,就算名字相同也不能使用

int main(int argc, char const *argv[])
{

    return 0;
}
