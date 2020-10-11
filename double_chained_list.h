//
//  double_chained_list.h
//  Liste_double_chainee
//
//  Created by Fanni Halmai on 10/10/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#ifndef double_chained_list_h
#define double_chained_list_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int val;
	struct Node *next; // Pointer to next node
    struct Node *prev; // Pointer to previous node
}Node;

typedef struct Head{
	struct Node *first;
}Head;

Node* initialise(void);
Node **push(Node **head, int val);
Node** pop(Node **head);
Node* next(Node *node);
Node* previous(Node *node);
void affiche(Node **head);

#endif /* double_chained_list_h */
