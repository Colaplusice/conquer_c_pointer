#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// 传进char 指针 将字符串写入地址 返回指针
int get_word(char *buf, int buf_size, FILE *fp)
{
    int len;
    int ch;
    //  读取空白字符
    while ((ch = getc(fp)) != EOF && !isalnum(ch));
    if (ch == EOF) return EOF;
    len = 0;
    do
    {
        buf[len] = ch;
        len++;
        if (len >= buf_size)
        {
            fprintf(stderr, "word too long \n");
            exit(1);
        }
    } while ((ch = getc(fp)) != EOF && isalnum(ch));
    buf[len] = '\0';
    return len;
}