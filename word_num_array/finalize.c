#include <stdio.h>
#include <stdlib.h>
#include "word_manage_p.h"

void word_finalize()
{
    for (int i = 0; i < num_of_word; i++)
    {
        free(word_array[i].name);
    }
}