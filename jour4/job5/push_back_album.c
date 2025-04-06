#include "album.h"
#include <stdlib.h> 
#include <stddef.h>

void push_back_album(t_album_list *list, t_album_list *album)
{
    if (list == NULL || album == NULL)
        return;

    while (list->next != NULL)
    {
        list = list->next;
    }

    list->next = album;
    album->next = NULL;
}