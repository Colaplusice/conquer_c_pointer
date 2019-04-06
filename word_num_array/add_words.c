#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "word_manage_p.h"

// 将index以后的单词都向后挪动一格
static void shift_array(int index)
{

    for (int i = WORD_NUM_MAX - 2; i >= index; i--)
    {
        word_array[i + 1] = word_array[i];
    }
    num_of_word++;
}
static char *my_chrdup(char *src)
{
    char *dest;
    dest = malloc(sizeof(char) * (strlen(src) + 1));
    strcpy(dest, src);
    return dest;
}

void add_word(char *word)
{
    int i;
    int result;
    for (i = 0; i < num_of_word; i++)
    {
        result = strcmp(word_array[i].name, word);
        // 有相同的单词
        if (result >= 0)
            break;
    }
    // 相同的单词
    if (num_of_word != 0 && result == 0)
    {
        word_array[i].count++;
    }
    else
    // 单词不同 在末尾添加单词，同时单词总数+1
    {
        shift_array(i);
        word_array[i].name = my_chrdup(word);
        word_array[i].count = 1;
    }
}
