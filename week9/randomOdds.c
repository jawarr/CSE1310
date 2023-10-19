#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    srand(time(0));
    int n = ((1 + rand() % 11) / 2) * 2 + 1;
    printf("%d\n", n);
}