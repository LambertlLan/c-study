#include <stdio.h>

typedef struct Student
{
    int age;
    char name[50];
    int score;
} Student;

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("f_write.txt", "w");
    Student s[4] = {
        18,
        "mike",
        59,
        22,
        "jiang",
        60,
        33,
        "lily",
        77,
        44,
        "lucy",
        88};
    //s,需要往文件写的内容的变量首地址
    //sizeof(s),往文件写入内容的块大小
    //1,往文件写入内容的块数目,写入文件的大小为:块大小*快数目
    //fp,操作的文件
    //返回值:成功时值为写入内容的块数目,不是文件总大小
    int ret = fwrite(s, 1, sizeof(s), fp);
    printf("ret = %d", ret);
    return 0;
}
