#include <string.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char *name = "sd";
    char *name_2 = "s";
    int res = strcmp(name, name_2);

    printf("%d", res);
    return 0;
}
