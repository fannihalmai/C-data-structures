//
//  functions.h
//  liste_chainee
//
//  Created by Fanni Halmai on 28/09/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#ifndef liste_chainee_h
#define liste_chainee_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Liste Liste;
typedef struct maillon_t maillon_t;

/* */

struct maillon_t {
 int x;
 maillon_t *suivant;
};

struct Liste
{
    maillon_t *premier;
};

/* */

//maillon_t ajouter_début(maillon_t *pliste, int val);
Liste *initialisation(void);
maillon_t* insertion_debut(Liste *liste, int val);
maillon_t* supprimer_debut(Liste *liste);
maillon_t* insertion_fin(Liste *liste, int val);
maillon_t* suppression_fin(Liste *liste);
void affiche(Liste *liste);
maillon_t* rechecher(Liste *liste, int val);
maillon_t* supprimer_val(Liste *liste, int val);

/* */





#endif /* liste_chainee.h */
