//
//  double_chained_list.c
//  Liste_double_chainee
//
//  Created by Fanni Halmai on 10/10/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#include "double_chained_list.h"
/* On initialise la liste et renvoie un pointeur head, qui pointera sur la tete de la liste */
Node *initialise(void){
	Node *head=(Node*)malloc(sizeof(Node));
	head=NULL;
	return head;
}

/* Fonction push permet d'ajouter un nouvel element en tete de liste */

Node** push(struct Node** head, int new_data)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->val = new_data;
    new_node->next = (*head);
    new_node->prev = NULL;
  
    if ((*head) != NULL)
        (*head)->prev = new_node;
  
    (*head) = new_node;
	
	return head;
}


/* Fonction push permet de supprimer le premier element de la liste */
Node** pop(Node **head){

	Node *element_sup=(Node*)malloc(sizeof(Node));
	Node *new_first=(Node*)malloc(sizeof(Node));
	//link second element to head
	element_sup=(*head);
	//deplacer head
	
	if (element_sup->next == NULL){
		(*head)=NULL;
	} else {
		(*head)=element_sup->next;
		new_first=(*head);
		new_first->prev=NULL;
	}
	
	free(element_sup);
	return head;
}

/* Renvoyer l'element precedent, s'il existe*/
Node* next(Node *node){
	if (node->next!=NULL){
		return node->next;
	}
	printf("Vous avez deja le dernier element.\n");
	exit(1);
}

/* Renvoyer l'element suivant, s'il existe*/
Node* previous(Node *node){
	if (node->prev!=NULL){
		return node->prev;
	}
	printf("Vous avez deja le premier element.\n");
	exit(1);
}

/* Affichage de la liste */

void display(Node **head){

	Node *actuel=(Node*)malloc(sizeof(Node));
	actuel = *head;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->val);
        actuel = actuel->next;
    }
    printf("NULL\n");
}
