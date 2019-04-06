#ifndef WORD_MANAGE_H_INCLUDED
#define WORD_MANAGE_H_INCLUDED
#include <stdio.h>
#include "word_manage.h"


typedef struct
{
    int count;
    char *name;
} Word;

#define WORD_NUM_MAX (10000)

extern Word word_array[];
extern int num_of_word;
#endif

