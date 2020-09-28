//
//  functions.c
//  liste_chainee
//
//  Created by Fanni Halmai on 28/09/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#include "liste_chainee.h"

/* */

Liste *initialisation(void) {
    Liste *liste = (Liste*)malloc(sizeof(Liste));
    maillon_t *maillon = (maillon_t*)malloc(sizeof(maillon_t));
    if (liste == NULL || maillon == NULL)
    {
        exit(1);
    }
    maillon->x = 0;
    maillon->suivant = NULL;
    liste->premier = maillon;
    return liste;
}


/* */

maillon_t* insertion_debut(Liste *liste, int val)
{
    /* Création du nouvel élément */
    maillon_t *maillon = malloc(sizeof(*maillon));
    if (liste == NULL || maillon == NULL)
    {
        exit(1);
    }
    maillon->x = val;
    /* Insertion de l'élément au début de la liste */
    maillon->suivant = liste->premier;
    liste->premier = maillon;
    return liste->premier;
}

/* */

maillon_t* supprimer_debut(Liste *liste){
    if (liste == NULL)
    {
        exit(1);
    }

    if (liste->premier != NULL)
    {
        maillon_t *maillon_sup = liste->premier;
        liste->premier = liste->premier->suivant;
        free(maillon_sup);
    }
    return liste->premier;
}

/* */

maillon_t* insertion_fin(Liste *liste, int val){
    maillon_t *maillon = malloc(sizeof(*maillon));
    if (liste == NULL || maillon == NULL)
    {
        exit(1);
    }
    
    /* Creation de l'élément pour la fin de la liste */
    maillon->x=val;
    maillon->suivant=NULL;
    
    /* On recherche le dernier element */
    maillon_t *actuel = liste->premier;
    while(actuel->suivant != NULL){
        actuel = actuel-> suivant;
    }
    /* Et on le lie au nouveau dernier element, maillon */
    actuel->suivant = maillon;
    return liste->premier;
}

/* */


maillon_t* suppression_fin(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    maillon_t *actuel = liste->premier;
    while(actuel->suivant->suivant != NULL){
        actuel = actuel-> suivant;
    }

    free(actuel->suivant);
    actuel->suivant=NULL;
    
    return liste->premier;
}

/* */

maillon_t* rechecher(Liste *liste, int val){
    if (liste == NULL){
        exit(EXIT_FAILURE);
    }
    
    maillon_t *actuel = liste->premier;
    
    while(actuel->x != val && actuel->suivant != NULL){
        actuel = actuel-> suivant;
    }
    if (actuel->x == val){
        printf("Valeur retrouvee !\n");
        return actuel;
    }
    printf("La valeur n'a pas ete retrouvee.\n");
    return liste->premier;
}

/* */

maillon_t* supprimer_val(Liste *liste, int val){
    if (liste == NULL){
        exit(EXIT_FAILURE);
    }
    
    maillon_t *actuel = liste->premier;
    
    while(actuel->suivant->x != val && actuel->suivant != NULL){
        actuel = actuel-> suivant;
    }
    
    if(actuel->suivant->x==val){
        actuel->suivant =actuel->suivant->suivant;
    }
    free(actuel->suivant);
    return liste->premier;
}

/* */


void affiche(Liste *liste){
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    maillon_t *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->x);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

/* */

