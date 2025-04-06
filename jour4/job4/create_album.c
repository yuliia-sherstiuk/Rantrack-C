
#include <stdlib.h>
#include <string.h>
#include "album.h"

t_album_list *create_album(char *artist, char *title, int year)
{
    t_album_list *album;

    album = malloc(sizeof(t_album_list));
    if (!album)
        return NULL;

    // Allocation mémoire pour artist
    album->artist = malloc(strlen(artist) + 1);
    if (!album->artist)
    {
        free(album);
        return NULL;
    }
    strcpy(album->artist, artist);

    // Allocation mémoire pour title
    album->title = malloc(strlen(title) + 1);
    if (!album->title)
    {
        free(album->artist);
        free(album);
        return NULL;
    }
    strcpy(album->title, title);

    album->year = year;
    album->next = NULL;

    return album;
}