#include <stdio.h>

struct Student
{
    char name[10];
    int age;
};

int main(int argc, char const *argv[])
{
    struct Student stu1 = {"mike", 20};
    struct Student stu2 = {"alex", 30};
    stu1 = stu2;
    printf("stu1.name = %s,stu1.age = %d", stu1.name, stu1.age);

    return 0;
}
