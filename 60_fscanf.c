#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("b.txt", "r");
    char buf[100];
    fscanf(fp, "%s\n", buf);
    printf("%s\n", buf);
    return 0;
}
