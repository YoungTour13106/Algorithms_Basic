#include<stdio.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/4949

#define TRUE	1
#define FALSE	0

int main(void) {

	char stack[100];
	char str[102]; 

	int top, flag = TRUE;
	while (TRUE) {
		top = -1; 

		gets(str);
		if (strcmp(str, ".") == 0) break;

		int i = 0;
		while (TRUE) {
			char ch = str[i++];
			if (ch == '.') break;

			switch (ch) {
			case '(': case '[':
				stack[++top] = ch;
				break;
			case ')':
				if (top == -1 || stack[top] != '(') {
					flag = FALSE;
					break;
				}

				top--;
				break;
			case ']':
				if (top == -1 || stack[top] != '[') {
					flag = FALSE;
					break;
				}

				top--;
				break;
			}
		}

		if (flag == FALSE || top > -1) {
			printf("no\n");
			flag = TRUE;
		}
		else {
			printf("yes\n");
		}
	}

	return 0;
}