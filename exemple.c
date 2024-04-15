#include <stdio.h>
#include <stdlib.h>

int main() {
    char * ptr;

    ptr = malloc(10 * sizeof(char));
    if (ptr != NULL) {
        printf("Mémoire allouée et utilisée.\n");
    } else {
        printf("Erreur d'allocation de mémoire pour ptr\n");
        return 1;
    }

    free(ptr); // Première libération de mémoire
    ptr = NULL;
    free(ptr); // Deuxieme libération de mémoire

    ptr = NULL; // Après libération, le pointeur est mis à NULL

    return 0;
}

