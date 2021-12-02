#include<stdio.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/1110

int main(void) {
	int n = 0, cnt = 0;
	scanf("%d", &n);

	int oNum = n, ten = 0, one = 0, nNum = 0;
	while (1) {
		ten = oNum / 10;
		one = oNum % 10;
		nNum = ten + one;

		oNum = (oNum % 10) * 10 + (nNum % 10);
		cnt++;
		if (oNum == n) {
			break;
		}
	}

	printf("%d\n", cnt);
	return 0;
}