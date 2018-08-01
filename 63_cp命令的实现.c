#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    //判断参数个数是否正确
    if (argc != 3)
    {
        printf("please input correct arguments");
        return -1;
    }
    //打开源文件(windows必须加b不然会以文本处理)
    FILE *srcF = fopen(argv[1], "rb");
    //打开目标文件
    FILE *dstF = fopen(argv[2], "wb");
    //开始读写内容,每次读4k
    int len;
    void *buffer = malloc(4 * 1024);
    while (1)
    {
        len = fread(buffer, 1, 4 * 1024, srcF);
        printf("len=%d\n", len);
        if (len == 0)
        {
            break;
        }
        fwrite(buffer, 1, len, dstF);
    }
    printf("copy complete");
    //关闭文件
    fclose(srcF);
    fclose(dstF);
    return 0;
}
