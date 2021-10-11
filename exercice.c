//
// Created by admin on 11/10/2021.
//
#include <stdio.h>
#include "structure.h"
#include "exercice.h"
#include "tableau.h"
void exercice1(){
    NombreRationel NR1 = saisirInfos();
    NombreRationel NR2 = saisirInfos();
    NombreRationel NR3 = addition( NR1, NR2);
    NR3 = simplifie(NR3);
    NombreRationel NR4 = multiplication(NR1,NR2);
    NR4 = simplifie(NR4);
    printf("Le résultat de l'addition des 2 est :");
    affichage(NR3);
    printf("Le résultat de la multiplication des 2 est :");
    affichage(NR4);
    return;
}
void exercice2(){
    int monTableau[NB_ELEM_MAX]={0};
    int nbValeurs;
    printf("Combien de valeurs souhaitez-vous avoir dans votre tableau ?\n");
    scanf("%d", &nbValeurs);
    if (nbValeurs > NB_ELEM_MAX) {
        printf("Désolé, mais nous ne pouvons stocker que %d valeurs.", NB_ELEM_MAX);
        return ;
    }
    remplissageTab(monTableau,nbValeurs);
    plusGrandEntierTableau(monTableau,nbValeurs);
    return;
}
void exercice3(){
    int monTableau3fois4[3][4]={0};
    int unTableau[12];
    remplissageTableau2D(monTableau3fois4);
    transfertValeur(monTableau3fois4,unTableau);
    printf("Le tableau à une dimension vaut donc ");
    afficherTableau(unTableau,12);
    return;
}