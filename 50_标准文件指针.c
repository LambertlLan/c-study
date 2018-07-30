#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("aaaaaa\n");
    // fclose(stdout); //关闭标准输出文件指针
    printf("bbbbbb\n");

    //打印库函数调用失败的原因
    perror("mike");
    // fclose(stderr); //关闭输出错误指针
    perror("jiang");

    int a = 10;
    printf("请输入a:");
    // fclose(stdin); //关闭标准输入文件指针
    perror("ha");
    scanf("%d", &a);
    printf("a = %d\n", a);
    return 0;
}
