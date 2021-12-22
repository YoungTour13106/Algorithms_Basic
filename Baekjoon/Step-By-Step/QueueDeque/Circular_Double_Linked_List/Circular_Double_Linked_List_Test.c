#include<stdio.h>
#include "Circular_Double_Linked_List.h"

int main(void) {
	CDLinkedList list;

	init(&list);

	for (int i = 0; i < 10; i++) {
		enqueue(&list, i);
	}

	printf("enqueue print\n");
	print_list(&list);

	printf("dequeue print\n");
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);
	dequeue(&list);  print_list(&list);

	return 0;
}