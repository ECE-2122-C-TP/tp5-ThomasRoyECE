//
// Created by admin on 11/10/2021.
//
#include <stdio.h>
#include "tableau.h"
#define NB_ELEM_MAX 100
//on remplit un tableau une dimension case par case
int remplissageTab(int monTableau[NB_ELEM_MAX],int nbValeurs) {
    int i = 0;
    for (i = 0; i < nbValeurs; i++) {
        printf("Veuillez saisir la %d ième valeurs\n", i+1);
        scanf("%d", &monTableau[i]);
    }
    return(0);
}
//on regarde chaque entier en mettant le plus grand qu'on a deja vu de cote pour le comparer à ceux qu'on voit.
void plusGrandEntierTableau(int monTableau[NB_ELEM_MAX],int nbValeurs){
    int i=0,max=0;
    for(i=0;i < nbValeurs; i++){
        if(max<=monTableau[i]){
            max=monTableau[i];
        }
    }
    printf("le plus grand entier du tableau est %d", max);
    return;
}
//fonction pour remplir le premier tableau avec l'aide de 2 boucle (on remplit ligne par ligne comme ça)
void remplissageTableau2D(int monTableau[3][4]) {
    int i = 0, j = 0, valeur = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insérer la valeur de la %d ligne et de la %d colonne \n", i, j);
            scanf("%d", &valeur);
            monTableau[i][j]=valeur;
        }
    }
    monTableau[i][j] = 0;
    return;
}
// fonction pour prendre les valeurs du premier tableau pour les mettre dans le 2ème
void transfertValeur(int monTableau[3][4],int unTableau[12]){
    int i,j,k=0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            unTableau[k]=monTableau[i][j];
            k=k+1;
        }
    }
    return;
}
//fonction pour afficher les valeur du tableau une à une
void afficherTableau(int tableau[], int taille) {
    for (int a = 0; a < taille; a++) {
        printf("%d ", tableau[a]);
    }
}