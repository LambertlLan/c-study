#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buf[] = "abc,mike,jiang,250";
    //strok会破坏原来字符串的结构
    char *p = strtok(buf, ",");

    while (p != NULL)
    {
        printf("p = %s\n", p);
        p = strtok(NULL, ",");
    }

    return 0;
}

int main01(int argc, char const *argv[])
{
    char buf[] = "abc,mike,jiang,250";
    //strok会破坏原来字符串的结构
    char *p = strtok(buf, ",");
    printf("p = %s\n", p);
    printf("buf = %s\n", buf);
    //第二次切割要写NULL
    char *p1 = strtok(NULL, ",");
    printf("p1 = %s\n", p1);
    printf("buf = %s\n", buf);
    return 0;
}
