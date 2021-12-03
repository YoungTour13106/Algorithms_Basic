#include<stdio.h>
#include<stdlib.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/10818

int main(void) {
	int n = 0;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n); // n 길이의 int 형 배열 선언
	int max = 0, min = 0;

	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];
	for (i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}

		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("%d %d\n", min, max);
	return 0;
}