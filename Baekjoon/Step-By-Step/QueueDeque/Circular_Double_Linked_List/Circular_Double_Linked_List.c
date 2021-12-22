#include<stdio.h>
#include<stdlib.h>
#include "Circular_Double_Linked_List.h"

void init(CDLinkedList* list) {
	list->front = list->rear = (Node*)malloc(sizeof(Node));
	list->front->next = list->front;
	list->front->prev = list->front;
	list->size = 0;
}

int is_empty(CDLinkedList* list) {
	return (list->front == list->rear);
}

void enqueue(CDLinkedList *list, element data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->prev = list->rear;
	newnode->next = list->front;
	list->front->prev = newnode;
	list->rear->next = newnode;
	list->rear = newnode;

	list->size++;
}

element dequeue(CDLinkedList* list) {
	if (is_empty(list)) {
		fprintf(stderr, "리스트가 비어있음\n");
		exit(1);
	}

	Node* temp = list->front->next;
	element data = temp->data;

	if (temp == list->rear) {
		list->rear = list->rear->prev;
	}

	list->front->next = temp->next;
	temp->next->prev = list->front;
	list->size--;
	free(temp);
	return data;
}

void print_list(CDLinkedList* list) {
	if (is_empty(&list)) {
		fprintf(stderr, "리스트가 비어있음\n");
		return;
	}

	Node* start = list->front;
	while (start != list->rear) {
		start = start->next;
		printf("[%d]<->", start->data);
	}
	printf("\n");
}