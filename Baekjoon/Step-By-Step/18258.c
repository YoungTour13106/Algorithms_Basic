#include<stdio.h>

int main(void) {
	int N;
	char cmd[10];
	int * queue = NULL;
	int front = 0, back = 0, cnt = 0;

	scanf("%d", &N);
	queue = (int *)malloc(sizeof(int) * N);


	int i;
	for (i = 0; i < N; i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			int x = 0;
			scanf("%d", &x);
			back = (back + 1) % N; // 한 칸 이동
			if (back != front) { // 포화 상태 아닌 경우
				queue[back] = x;
				cnt += 1;
			}
		}
		else if (strcmp(cmd, "pop") == 0) {
			if (front != back) {
				front = (front + 1) % N;
				printf("%d\n", queue[front]);
				cnt -= 1;
			}
			else {
				printf("-1\n");
			}
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", cnt);
		}
		else if (strcmp(cmd, "empty") == 0) {
			if (front == back) { printf("1\n"); }
			else { printf("0\n"); }
		}
		else if (strcmp(cmd, "front") == 0) {
			if (front != back) {
				printf("%d\n", queue[(front + 1) % N]);
			}
			else { printf("-1\n"); }
		}
		else if (strcmp(cmd, "back") == 0) {
			if (front != back) {
				printf("%d\n", queue[back]);
			}
			else { printf("-1\n"); }
		}
	}

	return 0;
}