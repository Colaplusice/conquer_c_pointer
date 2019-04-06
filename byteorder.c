#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 小端存放数据
    int hoge = 0x12345678;
    // 将首地址给char * hoge_p
    unsigned char *hoge_p = (unsigned char *)&hoge;
    printf("%x\n",hoge_p[0]);
    printf("%x\n",hoge_p[1]);
    printf("%x\n",hoge_p[2]);
    printf("%x\n",hoge_p[3]);

    int a=123;
    char *name=(char *)&a;
    printf(name);
    printf("%d\n",name[0]);
    printf("%d\n",name[1]);
    printf("%d\n",name[2]);
    return 0;
}
