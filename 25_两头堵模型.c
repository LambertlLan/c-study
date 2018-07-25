#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

    char *start = "          123456      ";
    char *end = start + strlen(start) - 1;

    while (*start == ' ' && *start != '\0')
    {
        start++;
    }
    while (*end == ' ' && *end != '\0')
    {
        end--;
    }
    int n = end - start + 1;
    printf("n = %d\n", n);

    char buf[100];
    strncpy(buf, start, n);
    //再尾部添加结束符
    buf[n] = 0;
    printf("buf = %s", buf);

    return 0;
}

//1532482343160
//1532482513928