#include <stdio.h>

void sort_arr(int *arr, int n)
{
    //数组作为形参会退化为指针
    int temp;
    for (size_t i = 0; i < n; i++)
    {

        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        /* code */
    }
}

int main(int argc, char const *argv[])
{
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
    sort_arr(arr, n);
    for (size_t i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
