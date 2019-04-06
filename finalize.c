#include <stdio.h>
#include <stdlib.h>
#include "word_manage.h"

void word_finalize(WordManager *manager)
{
    Word *pos;
    Word *word_header=manager->word_header;
    while (word_header != NULL)
    {
        pos = word_header;
        word_header = word_header->next;
        free(pos->name);
        free(pos);
    }
}