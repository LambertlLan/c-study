#include <stdio.h>

#define MAX2(a, b) (a) > (b) ? (a) : (b)
#define MAX3(a, b, c) (a) > (MAX2(b, c)) ? (a) : (MAX2(b, c))
int main(int argc, char const *argv[])
{
    printf("MAX2(1,2) = %d\n", MAX2(1, 2));
    printf("MAX3(1,2,3) = %d", MAX3(1, 2, 3));
    return 0;
}
