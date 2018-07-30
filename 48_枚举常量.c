#include <stdio.h>
// #define red = 0;
// #define blue = 1;
// #define green = 2;
// #define yellow = 3;

//枚举类型
//成员:枚举成员,枚举常量
//第一个成员如果没有赋值,默认为0,下一个成员比上一个成员多1
//相当于上面的define
enum Color
{
    red,
    blue,
    green,
    yellow
};

int main(int argc, char const *argv[])
{
    //枚举变量flag2
    enum Color flag2;
    //可使用枚举成员给flag2赋值
    flag2 = red;//等价于flag2 = 0;
    printf("red = %d", red);
    return 0;
}
