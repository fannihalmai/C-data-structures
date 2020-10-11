//
//  main.c
//  Liste_double_chainee
//
//  Created by Fanni Halmai on 10/10/2020.
//  Copyright © 2020 Fanni Halmai. All rights reserved.
//

#include "double_chained_list.h"

int main(void) {
	Node *head=initialise();
	push(&head,4);
	affiche(&head);
	pop_(&head);
	affiche(&head);
	
	
    return 0;
}
