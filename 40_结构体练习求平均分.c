#include <stdio.h>

struct Student
{
    char name[10];
    int math;
    int english;
};

int main(int argc, char const *argv[])
{
    struct Student a[2] = {
        {"mike", 21, 32},
        {"alex", 22, 33}};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = a[i].math + a[i].english;
        printf("%s's sum score %d\n", a[i].name, sum);
    }

    return 0;
}
