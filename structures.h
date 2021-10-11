//
// Created by thoma on 06/10/2021.
//

#ifndef TP5_STRUCTURES_H
#define TP5_STRUCTURES_H

struct NombreRationnel {
    int numerateur,denominateur;
};

typedef struct NombreRationnel NbrRationnel;

NbrRationnel saisie();

void afficher(NbrRationnel a);

NbrRationnel multiplication(NbrRationnel a, NbrRationnel b);

NbrRationnel addition(NbrRationnel a, NbrRationnel b);

int pgcd(NbrRationnel a);

#endif //TP5_STRUCTURES_H
