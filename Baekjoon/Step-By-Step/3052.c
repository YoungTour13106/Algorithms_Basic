#include<stdio.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/3052

int main() {

	int cnt[42] = { 0 };
	int a = 0, b = 42, num = 0;

	int i;
	for (i = 0; i < 10; i++) {
		scanf("%d", &a);
		cnt[a%b] += 1;
		if (cnt[a%b] == 1) { // �������� ���ʷ� ���� �� ī����
			num += 1;
		}
	}

	printf("%d\n", num);
	return 0;
}