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
    //申请一个指向堆区的空间,长度为(strlen("mikejiangabcsg") + 1) * sizeof(char)
    s.name = (char *)malloc((strlen("mikejiangabcsg") + 1) * sizeof(char));
    //将"mikejiangabcsg"拷贝到s.name中
    strcpy(s.name, "mikejiangabcsg");
    printf("%d,%s\n", s.age, s.name);
    if (s.name != NULL)
    {
        free(s.name);
        s.name = NULL;
    }
    return 0;
}
