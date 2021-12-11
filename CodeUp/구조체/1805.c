#include<stdio.h>
#include<stdlib.h>

struct machine {
	int id;
	int gas;
};

int main(void) {
	int check_machines[100] = { 0 };
	int n = 0, a = 0, b = 0;
	scanf("%d", &n);

	struct machine * machines = (struct machine*)malloc(sizeof(struct machine) * n);

	int i, j;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (check_machines[a] != 0) {
			i--;
			continue;
		}

		machines[i].id = a;
		machines[i].gas = b;
	}

	struct machine temp_machine;
	for (i = 0; i < (n-1); i++) {
		for (j = 0; j < (n - 1) - i; j++) {
			if (machines[j].id > machines[j + 1].id) {
				temp_machine = machines[j];
				machines[j] = machines[j + 1];
				machines[j + 1] = temp_machine;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d %d\n", machines[i].id, machines[i].gas);
	}

	return 0;
}