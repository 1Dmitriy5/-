#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("��������� �������\n");
//	printf("������ 1\n");
//
//	// �����, �������� �� �������� �����
//	int a, b, c;
//	// ������������, ��������� � �������� ����
//	int p;
//
//	scanf("%d%d%d", &a, &b, &c);
//	printf("�����: %d, %d, %d\n", a, b, c);
//	// ���������
//	p = a * b * c;
//	printf("p =  %d\n", p);
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ����\n");
//	printf("������ 2\n");
//
//	 ������ �� �������� �����
//
//	 �����, �������� �� �������� �����
//	int a, b, c;
//	 ������������, ��������� � �������� ����
//	int p;
//	FILE* fin = fopen("C:\\��� 18-19\\in2.txt", "rt");
//	if (fin == NULL) {
//		printf("������ ���� �� ������");
//		return;
//	}
//	fscanf(fin, "%d%d%d", &a, &b, &c);
//	fclose(fin);
//
//	 ����������� �����
//	printf("�����: %d, %d, %d\n", a, b, c);
//
//	 ���������
//	p = a * b * c;
//
//	 ����������� ������
//	printf("p =  %d\n", p);
//
//	 ������ � �������� ����
//
//	 �������� ����
//	FILE* fout;
//	fout = fopen("C:\\��� 18-19\\out2.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//	fprintf(fout, "%d", p);
//	fclose(fout);
//
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("��������� �������\n");
//	printf("������ 3\n");
//	
//	// �����, �������� �� �������� �����
//	int a, b, c;
//	int g, d;
//	// ������������, ��������� � �������� ����
//	int p;
//	
//	scanf("%d%d%d%d%d", &a, &b, &c, &g, &d);
//	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, g, d);
//	// ���������
//	p = a + b + c + d + g;
//	printf("p =  %d\n", p);
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("�������� ����\n");
//	printf("������ 2\n");
//
//	// ������ �� �������� �����
//
//	// �����, �������� �� �������� �����
//	int a, b, c, d, e;
//	// ������������, ��������� � �������� ����
//	int p;
//	FILE* fin = fopen("C:\\��� 18-19\\in4.txt", "rt");
//	if (fin == NULL) {
//		printf("������ ���� �� ������");
//		return;
//	}
//	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
//	fclose(fin);
//
//	// ����������� �����
//	printf("�����: %d, %d, %d, %d, %d\n", a, b, c, d, e);
//
//	// ���������
//	p = a + b + c + d + e;
//
//	// ����������� ������
//	printf("p =  %d\n", p);
//
//	// ������ � �������� ����
//
//	// �������� ����
//	FILE* fout;
//	fout = fopen("C:\\��� 18-19\\out4.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//	fprintf(fout, "%d", p);
//	fclose(fout);
//
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("��������� �������\n");
//	printf("������ 5\n");
//
//	int a[10];
//	int n;
//	int i;
//
//	FILE* fin = fopen("C:\\��� 18-19\\in5.txt", "rt");
//	if (fin == NULL) {
//		printf("������� ���� �� ������");
//		return;
//	}
//	fscanf(fin, "%d", &n);
//
//	for (i = 0; i < n; i += 1) {
//		fscanf(fin, "%d", &a[i]);
//	}
//	fclose(fin);
//
//	printf("����� ������ a[%d] = ", n);
//	for (i = 0; i < n; i += 1) {
//		printf("%d ", a[i]);
//	}
//
//	int s = 0;
//	for (i = 0; i < n; i += 1) {
//		s += a[i];
//	}
//
//	float sa = (float)s / n;
//
//	printf("\nsa = %f\n", sa);
//
//	for (i = 0; i < n; i += 1) {
//		if (a[i] > sa) {
//			a[i] *= 10;
//		}
//	}
//
//	printf("����� ������ a[%d] = ", n);
//	for (i = 0; i < n; i += 1) {
//		printf("%d ", a[i]);
//	}
//
//	FILE* fout;
//	fout = fopen("C:\\��� 18-19\\out5.txt", "wt");
//	if (fout == NULL) {
//		printf("�������� ���� �� ��������");
//		return;
//	}
//	fprintf(fout, "%d\n", n);
//
//	for (i = 0; i < n; i += 1) {
//		fprintf(fout, "%d ", a[i]);
//	}
//	fclose(fout);
//}

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("��������� �������\n");
	printf("������ 6\n");

	int a[10];
	int n;
	int i;

	FILE* fin = fopen("C:\\��� 18-19\\in6.txt", "rt");
	if (fin == NULL) {
		printf("������� ���� �� ������");
		return;
	}
	fscanf(fin, "%d", &n);

	for (i = 0; i < n; i += 1) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("����� ������ a[%d] = ", n);
	for (i = 0; i < n; i += 1) {
		printf("%d ", a[i]);
	}

	int s = 0;
	for (i = 0; i < n; i += 1) {
		s += a[i];
	}

	float sa = (float)s / n;

	printf("\nsa = %f\n", sa);

	for (i = 0; i < n; i += 1) {
		if (a[i] < sa & a[i] % 2 == 0) {
			a[i] = a[i] / 2;
		}
	}

	printf("����� ������ a[%d] = ", n);
	for (i = 0; i < n; i += 1) {
		printf("%d ", a[i]);
	}

	FILE* fout;
	fout = fopen("C:\\��� 18-19\\out6.txt", "wt");
	if (fout == NULL) {
		printf("�������� ���� �� ��������");
		return;
	}
	fprintf(fout, "%d\n", n);

	for (i = 0; i < n; i += 1) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}