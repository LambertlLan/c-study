#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *P = NULL;
    //堆区越界,不能为0,gcc检测不出来,导致内存污染
    p = (char *)malloc(0);
    strcpy(p, "mikejiang");
    printf("%s", p);
    return 0;
}
