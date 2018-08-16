#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n = 3;
    char **buf = (char **)malloc(n * sizeof(char *));
    //等于char buf[3][30] = {0};
    if (buf == NULL)
    {
        return -1;
    }

    for (size_t i = 0; i < n; i++)
    {
        /* code */
        char *p = (char *)malloc(30 * sizeof(char));
        char str[30];
        sprintf(str, "test%d%d", i, i);
        buf[i] = p;
        strcpy(buf[i], str);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%s,", buf[i]);
        /* code */
    }
    for (size_t i = 0; i < n; i++)
    {
        free(buf[i]);
        buf[i] = NULL;
        /* code */
    }
    free(buf);
    buf = NULL;

    return 0;
}
