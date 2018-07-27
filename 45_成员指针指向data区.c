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
    //"mike"是存在data区的字符常量,"mike"为该块内存的首地址
    s.name = "mike";
    printf("%d,%s\n", s.age, s.name);
    if (s.name != NULL)
    {
        free(s.name);
        s.name = NULL;
    }
    return 0;
}
