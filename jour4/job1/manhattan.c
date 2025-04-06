#include "manhattan.h"
#include <stdio.h>

int manhattan(point a, point b) {
    return ABS(a.x - b.x) + ABS(a.y - b.y);
}

int main() {
    point p1 = {3, 4};
    point p2 = {1, 1};
    printf("Distance = %d\n", manhattan(p1, p2)); 
    return 0;
}