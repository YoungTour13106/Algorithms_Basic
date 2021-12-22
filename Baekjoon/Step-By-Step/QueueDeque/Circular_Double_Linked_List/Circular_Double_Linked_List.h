#ifndef CIRCULAR_DOUBLE_LINKED_LIST_H
#define CIRCULAR_DOUBLE_LINKED_LIST_H

// 원형 이중 연결 리스트 (Circular Double Linked List)
typedef int element;
typedef struct node {
	element data;
	struct node* next;
	struct node* prev;
}Node;

typedef struct {
	Node* front;
	Node* rear;
	int size;
}CDLinkedList;

void init(CDLinkedList* list);

int is_empty(CDLinkedList* list);

void enqueue(CDLinkedList* list, element data);

element dequeue(CDLinkedList* list);

void print_list(CDLinkedList* list);

#endif