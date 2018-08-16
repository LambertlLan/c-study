#include <stdio.h>

typedef struct Student
{
    int id;
    char name[10];
    struct Student *next;
} Stu;

int main(int argc, char const *argv[])
{
    Stu s1 = {1, "annel", NULL};
    Stu s2 = {2, "tony", NULL};
    Stu s3 = {3, "mike", NULL};

    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL; //尾节点

    Stu *p = &s1;

    while (p != NULL)
    {
        printf("id = %d,name = %s\n", p->id, p->name);
        //往后移动一位
        p = p->next;
    }

    return 0;
}
