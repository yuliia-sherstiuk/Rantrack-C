#include <stdlib.h>
#include "album.h"

int main() {
    t_album album1;

    album1.title = "Master of Puppets";
    album1.artist = "Metallica";
    album1.year = 1986;

    print_album(&album1);

    return 0;
}