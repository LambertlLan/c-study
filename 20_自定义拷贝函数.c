#include <stdio.h>

void my_strcpy(char a[], char b[])
{
    int i = 0;
    while (*(a + i) != '\0')
    {
        *(b + i) = *(a + i);
        i++;
    }
    //结束符
    *(b + i) = 0;
}

int main(int argc, char const *argv[])
{
    char a[] = "abc";
    char b[10];
    my_strcpy(a, b);
    printf("a = %s\n", a);
    printf("b = %s\n", b);

    return 0;
}
