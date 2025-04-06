#include <stdlib.h>
#include "album.h"

t_album *realloc_album(t_album *albums, int size, int newsize) {
    if (newsize <= 0) {
        free(albums);
        return NULL;
    }

    t_album *new_albums = malloc(sizeof(t_album) * newsize);
    if (!new_albums) {
        return NULL; 
    }

    int min = (size < newsize) ? size : newsize;

    for (int i = 0; i < min; i++) {
        new_albums[i] = albums[i];
    }

    free(albums);
    return new_albums;
}
