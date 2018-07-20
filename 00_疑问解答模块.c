#include <stdio.h>

int main(int argc, char const *argv[])
{
    /**
     * 字符数组与字符串
     **/
    int a[] = {1, 2, 3, 0};
    char b[] = {'a', 'b', 'c', 0};
    char c[] = {'a', 'b', 'c'}; //后面自动补0
    //等价于
    // char b[] = "abc";
    //0 或者 '\0'为结束符
    printf("a = %d\n", a);
    printf("b = %s\n", b);
    return 0;
}
