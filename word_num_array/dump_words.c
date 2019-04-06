#include "word_manage_p.h"
#include <stdio.h>
void dump_word(FILE *fp)
{
    for (int i = 0; i < num_of_word; i++)
    {
        fprintf(fp,"%-20s%5d\n", word_array[i].name,word_array[i].count);
    }
}