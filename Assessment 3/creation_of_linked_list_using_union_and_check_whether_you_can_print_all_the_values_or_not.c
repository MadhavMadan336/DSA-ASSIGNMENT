//3) Creation of Linked list using Union. and check whether you can print all the values or not

#include <stdio.h>

#include <stdlib.h>

  union Node {

	int data;
   union Node* next;

};



// This function prints contents of linked list starting

// from the given node

void printList(union Node* n)

{

	while (n != NULL) {

		printf(" %d ", n->data);

		n = n->next;

	}

}



// Driver's code

int main()

{

	 union Node* head = NULL;

	 union Node* second = NULL;

	 union Node* third = NULL;



	// allocate 3 nodes in the heap

	head = (union Node*)malloc(sizeof(union Node));

	second = (union Node*)malloc(sizeof(union Node));

	third = (union Node*)malloc(sizeof(union Node));



	head->data = 1; // assign data in first node

	head->next = second; // Link first node with second



	second->data = 2; // assign data to second node

	second->next = third;



	third->data = 3; // assign data to third node

	third->next = NULL;



	// Function call

	printList(head);



	return 0;

}
