//
// Created by admin on 06/10/2021.
//
#include <stdio.h>
#include "structure.h"
//on rentre le numerateur et le denominateur
NombreRationel saisirInfos() {
    NombreRationel R;
    printf("Veuillez saisir le numérateur et le dénominateur :\n");
    scanf("%d %d", &R.numerateur, &R.denominateur);
    return (R);
}
//on affiche le numérateur et le denominateur
void affichage(NombreRationel NR1){
    NombreRationel R;
    printf("%d / %d \n",NR1.numerateur,NR1.denominateur);
    return;
}
//on multiplie les 2 numerateurs et denominateurs
NombreRationel multiplication(NombreRationel NR1,NombreRationel NR2){
    NombreRationel R;
    R.numerateur= NR1.numerateur* NR2.numerateur;
    R.denominateur= NR1.denominateur* NR2.denominateur;
    return(R);
}
//on additionne les 2 numerateurs ayant été multiplié par le denominateur de l'autre nombre rationel de sorte à
//simplement multiplier les denominateurs pour pouvoir les additionner
NombreRationel addition(NombreRationel NR1,NombreRationel NR2) {
    NombreRationel R;
    R.numerateur=NR1.numerateur*NR2.denominateur+NR1.denominateur*NR2.numerateur;
    R.denominateur=NR1.denominateur*NR2.denominateur;
    return(R);
}
//ici on fait une boucle pour trouver le pgcd et ensuite on divise le numérateur et le denominateur par le pgcd
NombreRationel simplifie(NombreRationel NR1) {
    NombreRationel R;
    int i,PGCD;
    for(i=1; i<=NR1.numerateur || i<=NR1.denominateur; i++)
        if(NR1.numerateur % i == 0 && NR1.denominateur % i == 0){
            PGCD=i;
        }
    R.numerateur=NR1.numerateur/PGCD;
    R.denominateur=NR1.denominateur/PGCD;
    return(R);
}
