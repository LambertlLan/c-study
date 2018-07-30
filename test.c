#include <stdio.h>
int main(int argc, char const *argv[])
{
    char buf[1024];
    fgets(buf, sizeof(buf), stdin);
    printf("%s", buf);
    return 0;
}
