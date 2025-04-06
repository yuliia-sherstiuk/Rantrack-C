#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "album.h"

int main() {
    int old_size = 2;
    int new_size = 4;

   
    t_album *albums = malloc(sizeof(t_album) * old_size);

 
    albums[0].title = strdup("Master of Puppets");
    albums[0].artist = strdup("Metallica");
    albums[0].year = 1986;

    albums[1].title = strdup("Thriller");
    albums[1].artist = strdup("Michael Jackson");
    albums[1].year = 1982;

    
    albums = realloc_album(albums, old_size, new_size);

    albums[2].title = strdup("Back in Black");
    albums[2].artist = strdup("AC/DC");
    albums[2].year = 1980;

    albums[3].title = strdup("The Dark Side of the Moon");
    albums[3].artist = strdup("Pink Floyd");
    albums[3].year = 1973;

    
    for (int i = 0; i < new_size; i++) {
        print_album(&albums[i]);
    }

    for (int i = 0; i < new_size; i++) {
        free(albums[i].title);
        free(albums[i].artist);
    }
    free(albums);

    return 0;
}
