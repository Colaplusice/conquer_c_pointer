#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    printf("enter you want");
    int size;
    char buf[256];
    int *varlib_buf;
    int i;
    fgets(buf, 256, stdin);
    printf("%s", buf);
    sscanf(buf, "%d", &size);
    varlib_buf = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
    {
        varlib_buf[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", i[varlib_buf]);
    }

    return 0;
}
