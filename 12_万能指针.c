#include <stdio.h>

int main(int argc, char const *argv[])
{
    void *p = NULL;
    char a = 'a';
    p = &a;

    *((char *)p) = '1';
    printf("a = %c", a);
    return 0;
}
