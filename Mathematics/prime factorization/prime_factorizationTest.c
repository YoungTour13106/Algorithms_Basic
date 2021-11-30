//Prime Factorization Module Test
#include<stdio.h>
#include "prime_factorization.h"

int main(void) {

	int n = 0;
	printf("Input: ");
	scanf("%d", &n);

	prime_factorization(n);
	return 0;
}
