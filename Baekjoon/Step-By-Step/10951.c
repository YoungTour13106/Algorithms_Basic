#include<stdio.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/10951

int main(void) {
	int a = 0, b = 0;

	while (scanf("%d %d", &a, &b) == 2) {
		printf("%d\n", a + b);
	}
	return 0;
}