#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "word_manage.h"

static char *my_chrdup(char *src)
{
    char *dest;
    dest = malloc(sizeof(char) * (strlen(src) + 1));
    strcpy(dest, src);
    return dest;
}

// 链表搜索添加
Word *create_word(char *name)
{
    Word *new_word;
    new_word = malloc(sizeof(Word));
    new_word->name = my_chrdup(name);
    new_word->count = 1;
    new_word->next = NULL;
    return new_word;
}
void add_word(WordManager *manager, char *word)
{
    Word *pos;
    Word *prev;
    Word *new_word;
    int result;
    prev = NULL;
    for (pos = manager->word_header; pos != NULL; pos = pos->next)
    {
        result = strcmp(pos->name, word);
        if (result >= 0)
        {
            break;
        }
        prev = pos;
    }
    if (manager->word_header != NULL & result == 0)
    {
        pos->count += 1;
    }
    else
    {
        new_word = create_word(word);
        if (prev == NULL)
        {
            new_word->next = manager->word_header;
            manager->word_header = new_word;
        }
        else
        {
            new_word->next = pos;
            prev->next = new_word;
        }
    }
}
