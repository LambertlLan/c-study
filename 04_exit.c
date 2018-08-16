�F!P=|! <stdio.h>
#include <stdlib.h>
//exit会结束进程
void fun()
{
    printf("i am fun\n");
    exit(250); //0表示正常退出,非0表示不正常退出
}

int main(int argc, char const *argv[])
{
    printf("start fun()\n");
    fun();
    printf("i am main\n");
    return 0;
}
