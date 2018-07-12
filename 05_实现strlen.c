#include <stdio.h>
//函数的声明,告诉编译器,这个函数是有定义的,只是放在别的地方
extern int my_strlen(char str[]);

int main(int argc, char const *argv[])
{
    //1.编译器只会往前面找函数
    //2.如果在后面,需要声明函数
    //3.一个函数只能调用一次,声明多次
    //4.声明的形参变量名和定义的形参变量名可以不一样
    //5.声明时变量名可以不写
    int len = my_strlen("abcd");
    printf("len = %d", len);
    return 0;
}
int my_strlen(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
