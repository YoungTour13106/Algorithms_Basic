#include<stdio.h>
#include<stdlib.h>

#define MAX_LIST_SIZE 100

typedef int element;
typedef struct {
	element array[MAX_LIST_SIZE];
	int size;
}ArrayListType;

void error(char *message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

// ����Ʈ �ʱ�ȭ
void init(ArrayListType *L) {
	L->size = 0;
}

// ���� ����
int is_empty(ArrayListType *L) {
	return L->size == 0;
}

int is_full(ArrayListType *L) {
	return L->size == MAX_LIST_SIZE;
}

element get_entry(ArrayListType *L, int pos) {
	if (pos < 0 || pos >= L->size) {
		error("��ġ ����");
	}
	return L->array[pos];
}

void print_list(ArrayListType *L) {
	int i;
	for (i = 0; i < L->size; i++) {
		printf("%d->", L->array[i]);
	}
	printf("\n");
}

void insert_last(ArrayListType *L, element item) {
	if (L->size >= MAX_LIST_SIZE) {
		error("����Ʈ �����÷ο�");
	}
	L->array[L->size++] = item;
}

void insert(ArrayListType *L, int pos, element item) {
	if (!is_full(L) && (pos >= 0) && (pos <= L->size)) {
		// �̵�
		for (int i = (L->size - 1); i >= pos; i--) {
			L->array[i + 1] = L->array[i];
		}
		// ����
		L->array[pos] = item;
		L->size++;
	}
}

element delete(ArrayListType *L, int pos) {
	element item;

	if (pos < 0 || pos >= L->size) {
		error("��ġ ����");
	}
	item = L->array[pos];
	for (int i = pos; i < (L->size - 1); i++) {
		L->array[i] = L->array[i + 1];
	}
	L->size--;
	return item;
}

// 183p. ��������
void insert_first(ArrayListType *L, element item) {
	if (is_full(L))
		error("����Ʈ �����÷ο�");
	else {
		int i;
		for (i = (L->size-1); i >= 0; i--) {
			L->array[i + 1] = L->array[i];
		}
		L->array[0] = item;
		L->size++;
	}
}

int main(void) {

	ArrayListType list;

	init(&list);
	insert(&list, 0, 10); print_list(&list);
	insert(&list, 0, 20); print_list(&list);
	insert(&list, 0, 30); print_list(&list);
	insert_last(&list, 40); print_list(&list);
	delete(&list, 0); print_list(&list);

	printf("\n\ninsert_first(list, item) Test \n");
	insert_first(&list, 50); print_list(&list);
	insert_first(&list, 60); print_list(&list);
	insert_first(&list, 70); print_list(&list);

	// 183p.��������
	printf("\n\nArrayListType malloc function Test \n");
	
	ArrayListType *list2 = (ArrayListType *)malloc(sizeof(ArrayListType));

	init(list2);
	insert(list2, 0, 10); print_list(list2);
	insert(list2, 0, 20); print_list(list2);
	insert(list2, 0, 30); print_list(list2);
	return 0;
}