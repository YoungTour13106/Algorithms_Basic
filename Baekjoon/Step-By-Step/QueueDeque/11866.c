#include<stdio.h>
#include<stdlib.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/11866

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

int main(void) {
	struct node *nodes = NULL, *front = NULL, *rear=NULL, *target=NULL;
	int N = 0, K = 0;
	scanf("%d %d", &N, &K);
	
	front = rear = target = (struct node *)malloc(sizeof(struct node));
	front->next = front;
	front->prev = front;

	for (int i = 0; i < N; i++) {
		struct node * newnode = (struct node *)malloc(sizeof(struct node));
		newnode->data = (i + 1);
		newnode->prev = rear;
		newnode->next = front;
		front->prev = newnode;
		rear->next = newnode;
		rear = newnode;
	}
	printf("<");
	while (front->next != rear) {
		
		for (int i = 0; i < K; i++) {
			target = target->next;
			if (target == front) { // 헤더 노드 생략
				i--;
				continue;
			}
		}

		printf("%d, ", target->data);
		struct node * temp = target;
		target = target->prev;
		temp->next->prev = temp->prev;
		temp->prev->next = temp->next;

		if (temp == rear) { rear = rear->prev; }
		free(temp);
	}
	printf("%d>\n", rear->data);

	return 0;
}
