#include <stdio.h>

typedef struct Student
{
    int age;
    char name[50];
    int score;
} Student;

int main(int argc, char const *argv[])
{
    Student s[4];
    FILE *fp = fopen("f_write.txt", "r");
    //SEEK_SET:从文件开头移动offset个字节
    //SEEEK_CUR:从当前位置移动offset个字节
    //SEEEK_END:从文件末尾移动offset个字节
    //开头不能往左移
    fseek(fp, 3 * sizeof(Student), SEEK_SET);
    fread(s, 1, sizeof(Student), fp);
    printf("name=%s,age=%d,score=%d\n", s[0].name, s[0].age, s[0].score);

    return 0;
}
