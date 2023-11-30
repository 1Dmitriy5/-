#include <stdio.h>
#include <Windows.h>

void task1() {
	int i = 1, j = 10, m, n;
	printf("введите m\n");
	scanf_s("%d", &m);
	printf("введите n\n");
	scanf_s("%d", &n);

	do {
		do {
			printf("%d ", i + j);
			i += 1;
		} while (i <= m);
		printf("\n");
		i = 1;
		j += 10;
	} while (j <= n *10);
}

void task2() {
	int i = 0, j = 1, m = 1;
	printf("\n");

	do {
		do {
			i = i + j;
			printf("%d ", i);
			m += 1;
		} while (m <= 10);
		printf("\n");
		i = 0;
		m = 1;
		j += 1;
	} while (j <= 10);
}
void task3() {
	int n = 5, j, i = 1;
	do {
		j = i;
		do {
			printf("%d ", j);
			j += 1;
		} while (j <= 5);
		printf("\n");
		n -= 1;
		i += 1;
	} while (n > 0);
 }
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("выберите нуджную вам операцию\n");
		printf("1: (i*10+j)\n");
		printf("2: (Таблица Пифагора)\n");
		printf("3: (рисунок по варианту)\n");
		printf("\n");
		printf("0: выйти из программы\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		}
	} while (n != 0);
}
