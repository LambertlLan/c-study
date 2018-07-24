#include <stdio.h>
int main(int argc, char const *argv[])
{
    int tmp = 11;
    {
        int a = 10;
        {
            a = 11; //ok ,还在作用域范围内
        }
    }
    //a = 11; //err ,离开作用域
    return 0;
}
