#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //字符串转整型,浮点型
    char str1[] = "-10";
    char str2[] = "10.01";
    printf("str1 = %d\n", atoi(str1));
    printf("str2 = %f\n", atof(str2));
    //整型,浮点型转字符串
    int num1 = 10;
    float num2 = 10.0101;
    char strnum1[100];
    char strnum2[100];
    sprintf(strnum1, "%d", num1);
    sprintf(strnum2, "%f", num2);
    printf("strnum1 = %s;strnum2 = %s\n", strnum1, strnum2);
    return 0;
}
