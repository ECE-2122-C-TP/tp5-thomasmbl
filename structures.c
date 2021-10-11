//
// Created by thoma on 06/10/2021.
//

#include <stdio.h>
#include "structures.h"


/*Fonction qui calcule le pgcd du numerateur et denominateur d'un nombre rationnel
 * IN a, nombre rationnel
 * OUT le plus grand commun diviseur du numerateur et denominateur
*/
int pgcd(NbrRationnel a) {
    int num=0,reste=0;
    if ( a.numerateur < a.denominateur ) {
        a.numerateur = a.denominateur;
        a.denominateur = num;
    }
    while ( a.numerateur % a.denominateur != 0 ) {
        reste = a.numerateur % a.denominateur;
        a.numerateur = a.denominateur;
        a.denominateur = reste;
    }
    return a.denominateur;
}


/*Fonction qui demande de saisir le numerateur et le denominateur pour un nombre rationnel
 * OUT le Nombre rationnel
 */
NbrRationnel saisie() {
    struct NombreRationnel a;
    printf("Entrez numerateur\n");
    scanf("%d", &a.numerateur);
    printf("Entrez denominateur\n");
    scanf("%d", &a.denominateur);
    return a;
}



/*Fonction qui affiche le nombre rationnel
 * IN a, nombre rationnel
 */
void afficher(NbrRationnel a) {
    printf("%d / %d", a.numerateur, a.denominateur);
}


/*Fonction qui multiplie deux nombre rationnels
 * INOUT a, premier nombre rationnel
 * IN b, deuxieme nombre rationnel
 * OUT nvRationnel, la multiplication de a et b
 */
NbrRationnel multiplication(NbrRationnel a, NbrRationnel b) {
    int nvNumerateur=0,nvDenominateur=0,pg=0;
    nvNumerateur= a.numerateur*b.numerateur;
    nvDenominateur= a.denominateur*b.denominateur;
    NbrRationnel nvRationnel = { nvNumerateur, nvDenominateur };
    pg = pgcd(nvRationnel);
    nvRationnel.numerateur = nvRationnel.numerateur / pg;
    nvRationnel.denominateur = nvRationnel.denominateur / pg;
    return nvRationnel;
}


/*Fonction qui additionne deux nombre rationnels
 * INOUT a, premier nombre rationnel
 * IN b, deuxieme nombre rationnel
 * OUT nvRationnel, l'addition de a et b
 */
NbrRationnel addition(NbrRationnel a, NbrRationnel b) {
    int nvNumerateur=0,nvDenominateur=0,pg=0;
    nvNumerateur = a.numerateur*b.denominateur + b.numerateur*a.denominateur;
    nvDenominateur = a.denominateur*b.denominateur;
    NbrRationnel nvRationnel = { nvNumerateur , nvDenominateur };
    pg = pgcd(nvRationnel);
    nvRationnel.numerateur = nvRationnel.numerateur / pg;
    nvRationnel.denominateur = nvRationnel.denominateur / pg;
    return nvRationnel;
}



