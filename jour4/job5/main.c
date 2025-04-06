#include <stdio.h>
#include "album.h"

int main(void)
{
    t_album_list *liste = create_album("Daft Punk", "Discovery", 2001);
    t_album_list *a2 = create_album("Muse", "Absolution", 2003);
    t_album_list *a3 = create_album("Pink Floyd", "Animals", 1977);

    push_back_album(liste, a2);
    push_back_album(liste, a3);

    print_album_list(liste);


    return 0;
}