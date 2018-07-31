#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) (rand() % x)

void write_file()
{
    FILE *fp = fopen("homework.txt", "w");
    int number;
    char str[20];
    srand(time(NULL));
    for (size_t i = 0; i < 500; i++)
    {
        number = random(100);
        sprintf(str, "%d\n", number);
        fputs(str, fp);
    }
    fclose(fp);
    fp = NULL;
}
void read_file()
{
    int arr[1024];
    int i = 0;
    int num = 0;
    FILE *fp = fopen("homework.txt", "r");
    char buf[100];
    while (1)
    {
        fgets(buf, sizeof(buf), fp);
        if (feof(fp))
        {
            break;
        }
        sscanf(buf, "%d\n", &num);
        arr[i] = num;
        i++;
    }
    fclose(fp);
    fp = NULL;
    printf("i =%d\n", i);
    //排序
    int temp;
    for (size_t k = 0; k < i - 1; k++)
    {

        for (size_t m = 0; m < i - 1 - k; m++)
        {
            if (arr[m] > arr[m + 1])
            {
                temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
            }
        }
    }

    for (size_t j = 0; j < i; j++)
    {
        printf("%d, ", arr[j]);
    }
}
int main(int argc, char const *argv[])
{
    // write_file();
    read_file();
    return 0;
}
