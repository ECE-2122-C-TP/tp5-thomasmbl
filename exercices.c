//
// Created by thoma on 06/10/2021.
//
#include <stdio.h>
#include "exercices.h"
#include "structures.h"

void exercice1() {
    NbrRationnel monNombre1,monNombre2;
    monNombre1 = saisie();
    monNombre2 = saisie();
    printf("La multiplication vaut: ");
    afficher(multiplication(monNombre1,monNombre2));
    printf("\n");
    printf("L'addition vaut: ");
    afficher(addition(monNombre1,monNombre2));

}

void exercice2() {
    int tableauEntiers[100],entier=0,max=0,i=0;
    printf("Entrez un nombre d'entiers<= 100 \n>");
    scanf("%d", &entier);
    if(entier>100) {
        printf("Erreur, veuillez rentrer un nouveau nombre entier\n>");
        scanf("%d", &entier);
    }
    for(i=0;i<=entier;i++) {
        printf("Entrez l'entier de la case %d\n>",i+1);
        scanf("%d", &tableauEntiers[i]);
        if(tableauEntiers[i]>=max){
            max=tableauEntiers[i];
        }
    }
    printf("le plus grand entier est %d\n=======FIN EXE2=======",max);
}

void exercice3() {
    int i=0,j=0,k=0,
        tableauEntiers[3][4],tableauEntiers2[12];
    for(i=0;i<3;i++) {
        for(j=0;j<4;j++) {
            printf("Entrez l'entier ligne %d colonne %d\n", i+1, j+1);
            scanf("%d", &tableauEntiers[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            tableauEntiers2[k] = tableauEntiers[i][j];
            printf("%d\t", tableauEntiers2[k]);
            k+=1;
        }
    }





}