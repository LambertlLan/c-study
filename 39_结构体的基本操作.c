#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char name[50];
    int score;
};

int main(int argc, char const *argv[])
{
    //定义结构体变量stu
    struct Student stu;
    stu.age = 18;
    strcpy(stu.name, "mike");
    stu.score = 59;
    //直接初始化
    struct Student stu2 = {18, "mike", 59};
    //定义指针

    struct Student *p;
    p = &stu;
    p->age = 18;
    strcpy(p->name, "mike");
    p->score = 59;
    printf("age = %d\n", p->age);
    printf("name = %s\n", p->name);
    printf("score = %d\n", p->score);
    (&stu)->age = 18;
    //.的优先级比*高,所以会先运行p.age所以加(*p)
    (*p).age = 18;

    return 0;
}
