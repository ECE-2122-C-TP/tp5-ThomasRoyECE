//
// Created by admin on 06/10/2021.
//

#ifndef TP5_ROY_THOMAS_STRUCTURE_H
#define TP5_ROY_THOMAS_STRUCTURE_H

#endif //TP5_ROY_THOMAS_STRUCTURE_H
typedef struct{
    int numerateur,denominateur;
}NombreRationel;
NombreRationel saisirInfos();
void affichage(NombreRationel NR1);
NombreRationel multiplication(NombreRationel NR1,NombreRationel NR2);
NombreRationel addition(NombreRationel NR1,NombreRationel NR2);
NombreRationel simplifie(NombreRationel NR1);
