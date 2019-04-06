#include "word_manage.h"
#include <stdlib.h>


WordManager* word_initialize()
{
    WordManager *manager=malloc(sizeof(WordManager));
    manager->word_header=NULL;
    return manager;
}