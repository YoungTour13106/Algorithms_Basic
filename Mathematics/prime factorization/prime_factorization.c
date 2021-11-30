// Prime Factorization Module Source File
#include "prime_factorization.h"

int prime_factorization(int n) {

	int num = n;
	int prime = 0;

	if (num == 1) { return; }

	for (prime = 2; prime <= num; prime++) {
		if ((num % prime) == 0) {
			prime_factorization((num / prime));
			break;
		}
	}

	printf("%d ", prime);
	return prime;
}