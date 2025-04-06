#ifndef ALBUM_H
#define ALBUM_H

typedef struct album_list
{
    char *artist;
    char *title;
    int year;
    struct album_list *next;
} t_album_list;

t_album_list *create_album(char *artist, char *title, int year);
void push_back_album(t_album_list *list, t_album_list *album);
void print_album_list(t_album_list *list);

#endif