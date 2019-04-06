#ifndef WORD_MANAGE_H_INCLUDED
#define WORD_MANAGE_H_INCLUDED
#include <stdio.h>
#define WORD_NUM_MAX (1000)
typedef struct Word_tag
{
    int count;
    char *name;
    struct Word_tag *next;
} Word;

typedef struct
{
    Word *word_header;
} WordManager;
WordManager* word_initialize(void);
void add_word(WordManager *manager,char *word);
void dump_word(WordManager *manager,FILE *fp);
void word_finalize(WordManager *manager);
#endif