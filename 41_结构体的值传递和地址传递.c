#include <stdio.h>
#include <string.h>
struct Student
{
    char name[10];
    int age;
};

void fun(struct Student temp)
{
    //结构体值传递在函数内部修改的值为temp的值,无法修改外部的值
    strcpy(temp.name, "haha");
    temp.age = 33;
    printf("fun() %s,%d\n", temp.name, temp.age);
}

void fun_address(struct Student *p)
{
    //使用地址传递,可在函数内修改外部的值
    strcpy(p->name, "haha");
    p->age = 33;
    printf("fun_address() %s,%d\n", p->name, p->age);
}
int main(int argc, char const *argv[])
{
    struct Student stu = {"xiao min", 18};
    fun(stu);
    printf("main() %s,%d\n", stu.name, stu.age);
    fun_address(&stu);
    printf("main() %s,%d\n", stu.name, stu.age);
    return 0;
}
