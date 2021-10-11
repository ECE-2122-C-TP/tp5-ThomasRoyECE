#include <stdio.h>
#include "exercice.h"
#include "structure.h"
int main() {
    printf("=====\tTP5\t=====\n");
    int choixExercice = 0;
    printf("Quel exercice voulez-vous lancer ?\n");
    do{
        scanf("%d", &choixExercice);
        switch (choixExercice) {
            case 1 :
                exercice1();
                printf("\n Voulez vous choisir un autre exercice ? \n Si oui entrez le numero d'un exercice \n Si non insérer un 0\n");
                break;
            case 2 :
                exercice2();
                printf("\n Voulez vous choisir un autre exercice ? \n Si oui entrez le numero d'un exercice \n Si non insérer un 0\n");
                break;
            case 3 :
                exercice3();
                printf("\n Voulez vous choisir un autre exercice ? \n Si oui entrez le numero d'un exercice \n Si non insérer un 0\n");
                break;
            case 0 :
                break;
            default : {
                printf("Choix Invalide ! Veuillez selectionner un exercice :\n");

                break;
            }
        }
    }while (choixExercice != 0);

    printf("Au revoir !\n");

    return 0;
}