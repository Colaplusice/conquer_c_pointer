#include "word_manage.h"
#include <stdio.h>
void dump_word(WordManager *manager,FILE *fp)
{
    Word *pos;
    for (pos = manager->word_header; pos != NULL; pos = pos->next)
    {
        fprintf(fp, "%-20s%5d\n", pos->name, pos->count);
    }
}