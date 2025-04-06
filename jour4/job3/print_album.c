#include <stdio.h>
#include "album.h"

void print_album(t_album *album) {
    if (album == NULL) {
        return;
    }

    printf("\"%s\" by \"%s\" released in %d.\n", album->title, album->artist, album->year);
}