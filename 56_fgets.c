#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = fopen("c.txt", "r");
    char buf[1024];
    while (1)
    {
        //遇到换行符,文件结尾,出错,结束本次读取
        fgets(buf, sizeof(buf), fp);
        if (feof(fp))
        {
            break;
        }
        printf("%s", buf);
    }
    fclose(fp);
    return 0;
}
