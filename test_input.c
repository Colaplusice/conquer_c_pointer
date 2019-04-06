#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    int ch;
    while ((ch = getc(stdin)) != EOF && !isalnum(ch))
        ;
    char *new_char;
    new_char = malloc(sizeof(char) * 1);
    int i = 0;
    do
    {
        new_char[i++] = ch;
    } while ((ch = getc(stdin)) != EOF && isalnum(ch));
    printf("%s", new_char);
    return 0;
}
