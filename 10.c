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
	printf("������� n �� ������� ������ ��������\n");
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
		printf("�������� ������ ��� ��������:\n");
		printf("1: ������� ����� �� 1 �� 10\n");
		printf("2: ������� ����� �� 10 �� 1\n");
		printf("3: ������� 5 ������ �������� ����� ������� � 1\n");
		printf("11: ������� ����� 100 90 80 ... 10 (����� WHILE)\n");
		printf("12: ������� ����� 1000 900 800 ... 100 (����� WHILE)\n");
		printf("20: ������ ����� �� 1000 �� 0, ��� ������������ n\n");
		printf("\n");
		printf("0: ����� �� ���������\n");
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