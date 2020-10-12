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
	display(&head);
	pop(&head);
	display(&head);
	
	
    return 0;
}
