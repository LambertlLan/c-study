#include <stdio.h>

typedef struct Student
{
    int age;
    char name[50];
    int score;
} Student;

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("f_write.txt", "r");
    Student s[4];
    //s,放置读取文件内容的变量地址
    //sizeof(s),往文件写入内容的块大小
    //1,往文件写入内容的块数目,写入文件的大小为:块大小*快数目
    //fp,操作的文件
    //返回值:成功时值为写入内容的块数目,不是文件总大小
    //1.如果文件内容大小 > 用户指定的读取大小,返回值为实际读取的块数目
    //文件的大小为数目*块的大小
    //int ret = fread(&s[0],sizeof(Student),2,fp);
    //2.如果文件内容大小 < 用户指定的读取大小,返回值为实际读取的块数目
    //实际读取的块数据 < 用户指定的读取大小,可能是0
    //int ret = fread(&s[0],sizeof(s),10,fp);
    //用户指定要10*sizeof(s)的大小,文件只有0.4sizeof(s),返回值为0
    int ret = fread(&s[0], 1, sizeof(s), fp);
    //sizeof(Student),一块的大小,写4块
    // int ret = fread(s, 4, sizeof(Student), fp);

    //如果把块大小指定为1,返回值就是读取文件的总大小
    printf("ret = %d\n", ret);

    for (size_t i = 0; i < 4; i++)
    {
        /* code */
        printf("name=%s,age=%d,score=%d\n", s[i].name, s[i].age, s[i].score);
    }

    return 0;
}
