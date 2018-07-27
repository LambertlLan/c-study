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
    struct Student *p;
    //先给struct Student申请内存
    p = (struct Student *)malloc(sizeof(struct Student));
    //再给p->name申请内存,不然p->name没有指向,回报段错误
    p->name = (char *)malloc((sizeof("mike") + 1) * sizeof(char));
    p->age = 18;
    strcpy(p->name, "mike");
    printf("age = %d,name=%s", p->age, p->name);
    //先释放name
    if (p->name != NULL)
    {
        free(p->name);
        p->name = NULL;
    }
    //再释放p
    if (p != NULL)
    {
        free(p);
        p = NULL;
    }

    return 0;
}
