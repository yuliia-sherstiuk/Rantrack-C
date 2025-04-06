#include <stdio.h>
#include "album.h"

int main(void)
{
    t_album_list *a = create_album("Radiohead", "OK Computer", 1997);

    if (a)
    {
        printf("Titre: %s | Artiste: %s | Annee: %d\n", a->title, a->artist, a->year);
    }
    else
    {
        printf("Erreur de création d'album.\n");
    }

    
    free(a->artist);
    free(a->title);
    free(a);

    return 0;
}

