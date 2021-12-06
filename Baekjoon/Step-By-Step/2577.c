#include<stdio.h>
#include<stdlib.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/2577

int main(void) {
	int cnt[10] = { 0 };
	int a = 0, b = 0, c = 0, result = 0;
	char str[10];

	scanf("%d %d %d", &a, &b, &c);

	result = (a*b)*c;
	sprintf(str, "%d", result);
	
	int i;
	for (i = 0; i < strlen(str); i++) {
		cnt[str[i] - 48] += 1;
	}

	for (i = 0; i < 10; i++) {
		printf("%d\n", cnt[i]);
	}

	return 0;
}