#include <stdio.h>
#include <Windows.h>

void print1_10() {
	int a = 1;
	do {
		printf("%d ", a);
		a += 1;
	} while (a <= 10);
}
void print10_1() {
	int a = 10;
	do {
		printf("%d ", a);
		a -= 1;
	} while (a >= 1);
}
void print50() {
	int a = 1;
	int i = 1;
	do {
		printf("%d ", a);
		a += 2;
		i += 1;
	} while (i <= 5);
}
void print100_1() {
	int a = 100;
	while (a >= 10) {
		printf("%d ", a);
		a -= 10;
	}
}
void print1000_100() {
	int a = 1000;
	while (a >= 100) {
		printf("%d ", a);
		a -= 100;
	}
}
void print1000_0() {
	int a = 1000;
	int j;
	printf("введите n на которое хотите убавлять\n");
	scanf_s("%d", &j);
	while (a >= 0) {
		printf("%d ", a);
		a -= j;
	}

}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	do {
		printf("\n");
		printf("\n");
		printf("выберите нужную вам операцию:\n");
		printf("1: вывести числа от 1 до 10\n");
		printf("2: вывести числа от 10 до 1\n");
		printf("3: вывести 5 первых нечетных чисел начиная с 1\n");
		printf("11: вывсети числа 100 90 80 ... 10 (через WHILE)\n");
		printf("12: вывести числа 1000 900 800 ... 100 (через WHILE)\n");
		printf("20: вывест числа от 1000 до 0, при определенном n\n");
		printf("\n");
		printf("0: выйти из программы\n");
		scanf_s("%d", &n);
		switch (n) {
		case 1:
			print1_10();
			break;
		case 2:
			print10_1();
			break;
		case 3:
			print50();
			break;
		case 11:
			print100_1();
			break;
		case 12:
			print1000_100();
			break;
		case 20:
			print1000_0();
			break;
		}
	} while (n != 0);
}