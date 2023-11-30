#include <stdio.h>44
#include <Windows.h>

#define NUM_ELEMENTS 10

int arr[NUM_ELEMENTS];
int n = 0;

void printElements() {
	int k = 0;
	printf("<");

	do {
		printf(" %d", arr[k]);
		k++;
	} while (k < n);
	printf(">");

}
void keyboardInput() {
	printf("n = ");
	scanf_s("%d", &n);

	printf("input %d valeus: ", n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}
void oddsX10() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}
int findMin() {
	int a = 0;
	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
			a = i;
		}
	}
	return a;
}
int perfect() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 10) {
			cnt++;
		}
	}
	return cnt;
}
int fandLastEver() {
	int a = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			a = i;
		}
	}
	return a;
}
void na1() {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] *= -1;
		}
	}
}

void zamena4() {
	for (int i = 0; i < n; i += 1) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}

void deleteElement(int delIndex) {
	for (int i = delIndex; i < n - 1; i += 1) {
		arr[i] = arr[i + 1];
	}
	n -= 1;
}

void insertElement(int insIndex, int value) {
	for (int i = n; i > insIndex; i -= 1) {
		arr[i] = arr[i - 1];
	}
	n += 1;
	arr[insIndex] = value;
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	do {
		printf("\n");
		printf("------------------------------\n");
		printf("���������� �������:");
		printElements();
		printf("�������� ������ ��� ��������:\n");
		printf("1: ������ � ���������� ������\n");
		printf("2: x10 ��� ���� �������� ���������\n");
		printf("3: ����� ����������� �������\n");
		printf("4: �������� ������� �������� ������  10\n");
		printf("5: ��������� �� 2 ���������� �������\n");
		printf("6: ������� ������ ����� ������������\n");
		printf("7: ��� ������ ��������� �������� �� -1\n");
		printf("8: ��� ��������� ������ 4 �������� �� 4\n");
		printf("11: ������� �������� ������\n");
		printf("12: �������� ����� ��������\n");
		printf("13: ������� ����������� ��������\n");
		printf("14: ����� ����������� ��������� �������� 0\n");
		printf("\n");
		printf("0: ����� �� ���������\n");
		printf("��������� �������� >>>>>> ");

		scanf_s("%d", &item);
		switch (item) {
		case 1:
			keyboardInput();
			break;

		case 2:
			oddsX10();
			break;

		case 3:
		{
			int min = findMin();
			printf("min = %d\n", min);
		}
		break;
		case 4:
		{
			int cnt = perfect();
			printf("cnt = %d\n", cnt);
		}
		break;
		case 5:
		{
			int index = fandLastEver();
			if (index >= 0) {
				arr[index] *= 2;
			}
		}
		break;
		case 6:
		{
			int index = findMin();
			printf("������ ������������ ��������� = %d\n", index);
			int cnt = 0;
			for (int i = 0; i < index; i++) {
				if (arr[i] % 2 == 0) {
					cnt++;
				}
			}
			printf("����� ������������ %d ������� ���������\n", cnt);
		}
		break;
		case 7:
			na1();
			break;
		case 8:
			zamena4();
			break;
		case 11:
		{
			printf("����� ���������� �������� = ");
			int index;
			scanf_s("%d", &index);

			deleteElement(index);
		}
		case 12:
		{
			printf("����� ����� ��������� ����� �������� �����? ������ = ");
			int index;
			scanf_s("%d", &index);

			printf("��������, ������� ����� �������� = ");
			int value;
			scanf_s("%d", &value);

			insertElement(index, value);
		}
		case 13:
		{
			int min = findMin();
			deleteElement(min);
		}
		break;
		case 14:
		{
			int indexmin = findMin();
			printf("������ ������������ �������� = %d\n", indexmin);

			insertElement(indexmin, 0);
		}
		break;
		}
	} while (item != 0);
}
