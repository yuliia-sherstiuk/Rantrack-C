#ifndef ALBUM_H
#define ALBUM_H

typedef struct album {
    char *title;
    char *artist;
    int year;
} t_album;


void print_album(t_album *album);
t_album *realloc_album(t_album *albums, int size, int newsize);

#endif
