#include<stdio.h>
#include<stdlib.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/2562

int main(void) {
	int max=0, maxIdx = 0;
	int num = 0;

	int i;
	for (i = 0; i < 9; i++) {
		scanf("%d", &num);
		
		//�ڿ����� 0���� ũ��
		if (max < num) {
			max = num;
			maxIdx = i;
		}
	}

	printf("%d\n%d\n", max, (maxIdx+1));
	return 0;
}