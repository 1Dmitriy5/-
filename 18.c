#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Патрикеев Дмитрий\n");
//	printf("Задача 1\n");
//
//	// Числа, читаемые из входного файла
//	int a, b, c;
//	// Произведение, выводимое в выходной файл
//	int p;
//
//	scanf("%d%d%d", &a, &b, &c);
//	printf("ввели: %d, %d, %d\n", a, b, c);
//	// Обработка
//	p = a * b * c;
//	printf("p =  %d\n", p);
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Власенко Олег\n");
//	printf("Задача 2\n");
//
//	 Чтение из входного файла
//
//	 Числа, читаемые из входного файла
//	int a, b, c;
//	 Произведение, выводимое в выходной файл
//	int p;
//	FILE* fin = fopen("C:\\лаб 18-19\\in2.txt", "rt");
//	if (fin == NULL) {
//		printf("вхдной файл не найден");
//		return;
//	}
//	fscanf(fin, "%d%d%d", &a, &b, &c);
//	fclose(fin);
//
//	 логирование ввода
//	printf("ввели: %d, %d, %d\n", a, b, c);
//
//	 Обработка
//	p = a * b * c;
//
//	 логирование вывода
//	printf("p =  %d\n", p);
//
//	 Запись в выходной файл
//
//	 Выходной файл
//	FILE* fout;
//	fout = fopen("C:\\лаб 18-19\\out2.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не создался");
//		return;
//	}
//	fprintf(fout, "%d", p);
//	fclose(fout);
//
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Патрикеев Дмитрий\n");
//	printf("Задача 3\n");
//	
//	// Числа, читаемые из входного файла
//	int a, b, c;
//	int g, d;
//	// Произведение, выводимое в выходной файл
//	int p;
//	
//	scanf("%d%d%d%d%d", &a, &b, &c, &g, &d);
//	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, g, d);
//	// Обработка
//	p = a + b + c + d + g;
//	printf("p =  %d\n", p);
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Власенко Олег\n");
//	printf("Задача 2\n");
//
//	// Чтение из входного файла
//
//	// Числа, читаемые из входного файла
//	int a, b, c, d, e;
//	// Произведение, выводимое в выходной файл
//	int p;
//	FILE* fin = fopen("C:\\лаб 18-19\\in4.txt", "rt");
//	if (fin == NULL) {
//		printf("вхдной файл не найден");
//		return;
//	}
//	fscanf(fin, "%d%d%d%d%d", &a, &b, &c, &d, &e);
//	fclose(fin);
//
//	// логирование ввода
//	printf("ввели: %d, %d, %d, %d, %d\n", a, b, c, d, e);
//
//	// Обработка
//	p = a + b + c + d + e;
//
//	// логирование вывода
//	printf("p =  %d\n", p);
//
//	// Запись в выходной файл
//
//	// Выходной файл
//	FILE* fout;
//	fout = fopen("C:\\лаб 18-19\\out4.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не создался");
//		return;
//	}
//	fprintf(fout, "%d", p);
//	fclose(fout);
//
//}

//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Патрикеев Дмитрий\n");
//	printf("Задача 5\n");
//
//	int a[10];
//	int n;
//	int i;
//
//	FILE* fin = fopen("C:\\лаб 18-19\\in5.txt", "rt");
//	if (fin == NULL) {
//		printf("входной файл не найден");
//		return;
//	}
//	fscanf(fin, "%d", &n);
//
//	for (i = 0; i < n; i += 1) {
//		fscanf(fin, "%d", &a[i]);
//	}
//	fclose(fin);
//
//	printf("ввели массив a[%d] = ", n);
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
//	printf("ввели массив a[%d] = ", n);
//	for (i = 0; i < n; i += 1) {
//		printf("%d ", a[i]);
//	}
//
//	FILE* fout;
//	fout = fopen("C:\\лаб 18-19\\out5.txt", "wt");
//	if (fout == NULL) {
//		printf("выходной файл не создался");
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
	printf("Патрикеев Дмитрий\n");
	printf("Задача 6\n");

	int a[10];
	int n;
	int i;

	FILE* fin = fopen("C:\\лаб 18-19\\in6.txt", "rt");
	if (fin == NULL) {
		printf("входной файл не найден");
		return;
	}
	fscanf(fin, "%d", &n);

	for (i = 0; i < n; i += 1) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);

	printf("ввели массив a[%d] = ", n);
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

	printf("ввели массив a[%d] = ", n);
	for (i = 0; i < n; i += 1) {
		printf("%d ", a[i]);
	}

	FILE* fout;
	fout = fopen("C:\\лаб 18-19\\out6.txt", "wt");
	if (fout == NULL) {
		printf("выходной файл не создался");
		return;
	}
	fprintf(fout, "%d\n", n);

	for (i = 0; i < n; i += 1) {
		fprintf(fout, "%d ", a[i]);
	}
	fclose(fout);
}