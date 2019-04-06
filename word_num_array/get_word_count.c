#include "word_manage_p.h"
#include <string.h>

int get_word_count(char *word)
{
    int begin = 0;
    int end = num_of_word;
    int index;
    while (begin <= end)
    {
        index = (begin + end) / 2;
        int result = strcmp(word_array[index].name, word);
        if (result == 0)
        {
            return word_array[index].count;
        }
        // order by alpha
        else if (result > 0)
        {
            end = index - 1;
        }
        else
        {
            begin = index + 1;
        }
    }
    return 0;
}