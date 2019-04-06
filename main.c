#include <stdio.h>
#include <stdlib.h>
#include "get_word.h"
#include "word_manage.h"

#define WORD_LEN_MAX (1024)

int main(int argc, char const *argv[])
{
   
    char buf[WORD_LEN_MAX];
    FILE *fp;
    if (argc == 1)
        fp = stdin;
    else
        fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "%s:%s can not open.\n", argv[0], argv[1]);
        exit(1);
    }
    // init words
    WordManager *manager= word_initialize();
    // add words
    while (get_word(buf, WORD_LEN_MAX, fp) != EOF)
    {
        add_word(manager,buf);
    }
    // out
    dump_word(manager,stdout);
    // end
    word_finalize(manager);
    return 0;
}
