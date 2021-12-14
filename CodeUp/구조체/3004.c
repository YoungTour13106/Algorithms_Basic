#include<stdio.h>
#include<stdlib.h>

struct person {
	int order;
	int height;
};

int main(void) {
	struct person * people = NULL;
	int n = 0;
	scanf("%d", &n);

	people = (struct person*)malloc(sizeof(struct person) * n);
	
	int i;
	for (i = 0; i < n; i++) {
		scanf("%d", &people[i].height);
		people[i].order = 0;
	}

	// ÀçÁ¤·Ä
	int j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if ((i != j) && (people[i].height > people[j].height)) {
				people[i].order += 1;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", people[i].order);
	}

	free(people);
	return 0;
}