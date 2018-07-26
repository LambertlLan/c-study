#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char p[] = "hello\0mike";
    char buf[100];
    printf("sizeof(p) = %lu\n", sizeof(p));
    //遇到\0会停止拷贝
    strncpy(buf, p, sizeof(p));
    printf("buf1 = %s\n", buf);
    printf("buf2 = %s\n", buf + strlen("hello") + 1);

    memset(buf, 0, sizeof(buf));
    //遇到\0也会继续拷贝
    memcpy(buf, p, sizeof(p));
    printf("buf3 = %s\n", buf);
    printf("buf4 = %s\n", buf + strlen("hello") + 1);

    //内存重叠别用memcpy
    // memcpy(&a[2], a, 5 * sizeof(a));
    //使用memmove
    memmove(&a[2], a, 5 * sizeof(a));
    return 0;
}
