#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char *name;
    int age;
};

int main(int argc, char const *argv[])
{
    struct Student s;
    s.age = 18;
    //定义一个栈区变量
    char buf[100];
    //成员变量指针指向栈区变量
    s.name = buf;
    strcpy(s.name, "mikejiangabcsg");
    printf("%d,%s\n", s.age, s.name);
    if (s.name != NULL)
    {
        free(s.name);
        s.name = NULL;
    }
    return 0;
}
