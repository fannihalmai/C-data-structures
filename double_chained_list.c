//
//  double_chained_list.c
//  Liste_double_chainee
//
//  Created by Fanni Halmai on 10/10/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#include "double_chained_list.h"
/* Initialiser la liste et ajouter premier element */
Node** initialisation(void){
	Node **head=(Node**)malloc(sizeof(Node));
	Node *node=(Node*)malloc(sizeof(Node));
	int value;
	if (head == NULL)
    {
        exit(1);
    }
    printf("Insert first value : \n");
    scanf("%d", &value);
	head=&node;
	node->prev=*head;
	node->next=NULL;
	return head;
}

/* Ajouter premier element */
Node** push_ele(Node **head, int value){
	if (*head==NULL){
		exit(1);
	}
	Node *new_element=(Node*)malloc(sizeof(Node));
	new_element->next=(*head);
	new_element->prev=NULL;
	head=&new_element;
	return head;
}

/* Supprimer premier element */
Node** pop_ele(Node **head){
	if (*head==NULL){
		exit(1);
	}
	Node *element_sup=(Node*)malloc(sizeof(Node));
	Node *new_first=(Node*)malloc(sizeof(Node));
	//link second element to head
	element_sup=*head;
	//deplacer head
	head=&element_sup->next;
	new_first=*head;
	new_first->prev=NULL;
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

