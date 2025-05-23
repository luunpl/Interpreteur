/* Exemple d'utilisation de l'analyse lexicale : 
    Affichage d'une sequence de lexemes */

#include <stdio.h>
#include <stdlib.h>
#include "analyse_lexicale.h"

int main(int argc, char *argv[]) {
    switch (argc) {
        case 1:
            // Démarre l'analyse lexicale sur stdin
            demarrer("");
            break;
        case 2:
            // Démarre l'analyse lexicale sur le fichier transmis en argument
            demarrer(argv[1]);
            break;
        default:
            printf("Nombre d'arguments incorrects !\n");
            exit(1);
    }

    while (!fin_de_sequence()) {
        afficher(lexeme_courant());
        printf("\n");
        avancer();
    }

    arreter(); // Termine l'analyse lexicale
    return 0;
}
