#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buf[] = "abcdefg";
    //查询字符
    char *p = strchr(buf, 'd');
    //查询字符串
    char *p1 = strstr(buf, "cde");
    if (p == NULL)
    {
        printf("查询失败\n");
    }
    else
    {
        printf("p=%s\n", p);
    }

    if (p1 == NULL)
    {
        printf("查询失败\n");
    }
    else
    {
        printf("p1=%s\n", p1);
    }
    return 0;
}
