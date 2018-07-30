#include <stdio.h>

struct Test
{
    /* data */
    int a;
};

struct Test obj;

//给struct Test2类型起一个别名叫Test2
typedef struct Test2
{
    /* data */
    int b;
} Test2;

Test2 obj2;

int main(int argc, char const *argv[])
{
    //1.typedef给一个以存在的类起一个别名
    //2.typedef不能创建新类型

    // 给int起一个别名叫int64
    typedef int int64;
    return 0;
}
