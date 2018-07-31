#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("d.txt", "w");
    srand((unsigned int)time(NULL));
    int num;
    for (size_t i = 0; i < 10; i++)
    {
        num = rand() % 100;
        fprintf(fp, "%d, ", num);
    }

    return 0;
}
