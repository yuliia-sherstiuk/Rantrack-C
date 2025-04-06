#include <stdio.h>
#include "album.h"

void print_album_list(t_album_list *list)
{
    while (list != NULL)
    {
        printf("Titre: %s | Artiste: %s | Annee: %d\n", list->title, list->artist, list->year);
        list = list->next;
    }
}