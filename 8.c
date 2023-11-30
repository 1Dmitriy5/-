#include <stdio.h>
#include <Windows.h>

void aboutMe() {
	printf("Патрикеев\n");
	printf("Дмитрий\n");
	printf("Михайлович\n");
	printf("\n");
	printf("Группа: ПИбд-14-2023\n");
	printf("Дата: 02.10.2023\n");
	printf("Основы Програмирования и Алгоритмизации\n");
	printf("Лабораторная №8\n");

}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	aboutMe();
}

