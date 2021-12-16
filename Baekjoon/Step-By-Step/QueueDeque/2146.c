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
		circular_queue[++rear] = i; // step 1. 포화상태로 만든다.
	}

	while (1) {
		t += 1; // 카드 뽑기 시도
		front = (front + 1) % (N + 1); // 한 칸 이동
		int deq_data = circular_queue[front];

		// step 3. front와 rear이 같아지면, 마지막 데이터
		if (front == rear) {
			printf("%d\n", deq_data);
			break;
		}

		// step 2. 카드를 뽑아서, 버릴지 다시 삽입할 지 결정한다.
		if (t % 2 == 0) {
			rear = (rear + 1) % (N + 1); // 한 칸 이동
			circular_queue[rear] = deq_data;
		}
	}
	return 0;
}