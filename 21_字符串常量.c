#include <stdio.h>
#include <string.h>

void fun()
{
    printf("s3 = %p\n", "hello");
}
int main(int argc, char const *argv[])
{
    //1.每个字符串都是一个地址,这个地址就是字符串的首地址
    printf("s1=%s\n", "hello");
    printf("s2=%p\n", "hello");
    fun();
    //2.字符串常量放在data区,文字常量区的字符串只读,不能修改

    char *p1 = "hello";
    printf("*p1 = %c\n", *p1);
    //使用%s,传入字符串地址可以打印出来字符串
    printf("*p1 = %s\n", p1);
    //3.p1指向字符串常量,字符串常量为只读,不能修改
    //*p1 = 'a';//修改 err
    //4.p3指向文字常量区的内存,故无法修改
    //5.全局变量和文字常量,程序不结束不释放
    char *p3 = "hello";
    strcpy(p3, "abc"); //err 段错误
    printf("*p3 = %s", *p3);
    return 0;
}
