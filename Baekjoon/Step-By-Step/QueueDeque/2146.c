#include<stdio.h>
#include<stdlib.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/2164

int main(void) {
	int * circular_queue = NULL;
	int front = 0, rear = 0;
	int N, t = 0;
	
	scanf("%d", &N);
	circular_queue = (int *)malloc(sizeof(int) * (N + 1)); //

	for (int i = 1; i <= N; i++) {
		circular_queue[++rear] = i; // step 1. ��ȭ���·� �����.
	}

	while (1) {
		t += 1; // ī�� �̱� �õ�
		front = (front + 1) % (N + 1); // �� ĭ �̵�
		int deq_data = circular_queue[front];

		// step 3. front�� rear�� ��������, ������ ������
		if (front == rear) {
			printf("%d\n", deq_data);
			break;
		}

		// step 2. ī�带 �̾Ƽ�, ������ �ٽ� ������ �� �����Ѵ�.
		if (t % 2 == 0) {
			rear = (rear + 1) % (N + 1); // �� ĭ �̵�
			circular_queue[rear] = deq_data;
		}
	}
	return 0;
}