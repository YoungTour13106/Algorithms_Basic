#include<stdio.h>

// Baekjoon Online Judge
// https://www.acmicpc.net/problem/4949

#define TRUE	1
#define FALSE	0

int main(void) {

	char stack[100]; // 널문자 포함 x
	char str[101]; // 100보다 작거나 같다 + 널문자

	int top, flag = TRUE;
	while (TRUE) {
		top = -1; // 스택 초기화

		gets(str);
		if (strcmp(str, ".") == 0) break;

		int i = 0;
		while (TRUE) {
			char ch = str[i++];
			if (ch == '.') break;

			switch (ch) {
			case '(': case '[':
				stack[++top] = ch; // 푸쉬
				break;
			case ')':
				if (top == -1 || stack[top] != '(') {
					flag = FALSE;
					break;
				}

				top--; // 팝
				break;
			case ']':
				if (top == -1 || stack[top] != '[') {
					flag = FALSE;
					break;
				}

				top--; // 팝
				break;
			}
		}

		if (flag == FALSE || top > -1) {
			printf("No\n");
			flag = TRUE;
		}
		else {
			printf("Yes\n");
		}
	}

	return 0;
}