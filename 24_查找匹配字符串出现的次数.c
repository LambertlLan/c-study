#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *p = "12abcd11213abcd45646abcd1231abcd";

    int i = 0;
    char *temp = NULL;

    while (1)
    {
        temp = strstr(p, "abcd");
        if (temp == NULL)
        {
            break;
        }
        else
        {
            //找到之后,将当前a的地址,+4得到abcd的下一个字符的地址,再继续往后找
            p = temp + strlen("abcd");
            i++;
        }
    }
    printf("has abcd = %d", i);

    return 0;
}
