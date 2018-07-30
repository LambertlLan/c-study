#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    fp = fopen("./b.txt", "w");
    if (fp == NULL)
    {
        perror("fopen");
        return -1;
    }
    else
    {
        fputc('a', fp);
        fputc('b', fp);
        fputc('c', fp);
    }
    printf("address = %p", fp);
    fclose(fp);
    fp = NULL;
    return 0;
}
