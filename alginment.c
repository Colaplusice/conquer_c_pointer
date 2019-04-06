#include <stdio.h>

typedef struct alginment
{
    int int1;
    double doubel1;
    char char1;
    double doubel2;
} Hoge;

int main(int argc, char const *argv[])
{
    Hoge hoge;
    printf("size of Hoge :%d\n", sizeof(Hoge));
    printf("size of hoge :%d\n", sizeof(hoge));
    printf("int size %d\n",sizeof(hoge.int1));
    printf("char size %d\n",sizeof(hoge.char1));
    printf("double size %d\n",sizeof(hoge.doubel1));
    return 0;
}
