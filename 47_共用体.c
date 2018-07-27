#include <stdio.h>

union Test {
    unsigned char a;
    unsigned short b;
    unsigned int c;
};

int main(int argc, char const *argv[])
{
    //1.结构体的大小可以简单认为成员大小的累加
    //2.共用体的大小为最大成员的大小

    printf("%lu\n", sizeof(union Test));
    //3.共用体公有一块内存,所以成员的地址一样
    union Test obj;
    printf("%p,%p,%p,%p\n", &obj, &obj.a, &obj.b, &obj.b);
    //4.给某个成员赋值,会影响到另外的成员
    //左边是高位,右边是地位
    //高位放高地址,地位放低地址(小端)
    //故 a 再最低位,b 再中间,c再最高位
    obj.c = 0x44332211;
    printf("obj.c = %x\n", obj.c);
    printf("obj.b = %x\n", obj.b);
    printf("obj.a = %x\n", obj.a);

    obj.a = 0xaa;
    printf("obj.c = %x\n", obj.c);
    printf("obj.b = %x\n", obj.b);
    printf("obj.a = %x\n", obj.a);

    return 0;
}
