#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>


int a[1000]; 
int n;
void Load() {
	FILE* fin = fopen("C:\\лаб 18-19\\lb1.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}
	fscanf(fin, "%d", &n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &a[i]);
	}
	fclose(fin);
}
void SaveResult() {
	float sa = 0;
	float s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
	}
	sa = s / n;
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > sa) {
			m++;
		}
	}
	FILE* fout = fopen("C:\\лаб 18-19\\ex1.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (a[i] > sa) {
			fprintf(fout, "%d ", a[i]);
		}
	}
	fclose(fout);
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task1!\n");

	Load();
	SaveResult();
}
//
//int *pa;
//int n;
//void Load() {
//	FILE* fin = fopen("C:\\лаб 18-19\\lb2.txt", "rt");
//	if (fin == NULL) {
//		printf("Входной файл не найден\n");
//		return;
//	}
//	fscanf(fin, "%d", &n);
//	pa = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++) {
//		fscanf(fin, "%d", &pa[i]);
//	}
//	fclose(fin);
//}
//void SaveResult() {
//	float sa = 0;
//	float s = 0;
//	for (int i = 0; i < n; i++) {
//		s += pa[i];
//	}
//	sa = s / n;
//	int m = 0;
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			m++;
//		}
//	}
//	FILE* fout = fopen("C:\\лаб 18-19\\ex2.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не найден\n");
//		return;
//	}
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if (pa[i] > sa) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	fclose(fout);
//}
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Hello! It is Task2!\n");
//
//	Load();
//	SaveResult();
//
//	free(pa);
//}
int *pa;
int n;
void Load() {
	FILE* fin = fopen("C:\\лаб 18-19\\lb3.txt", "rt");
	if (fin == NULL) {
		printf("Входной файл не найден\n");
		return;
	}
	fscanf(fin, "%d", &n);
	pa = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		fscanf(fin, "%d", &pa[i]);
	}
	fclose(fin);
}
void Save
Result() {
	float sa = 0;
	float s = 0;
	for (int i = 0; i < n; i++) {
		s = s + (pa[i]);
	}
	sa = s / n;
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (((pa[i]) > 0) & ((pa[i]) < sa)) {
			m++;
		}
	}
	FILE* fout = fopen("C:\\лаб 18-19\\ex3.txt", "wt");
	if (fout == NULL) {
		printf("Выходной файл не найден\n");
		return;
	}
	fprintf(fout, "%d\n", m);
	for (int i = 0; i < n; i++) {
		if (((pa[i]) > 0) & ((pa[i]) < sa)) {
			fprintf(fout, "%d ", pa[i]);
		}
	}
	fclose(fout);
}
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("Hello! It is Task3!\n");

	Load();
	SaveResult();

	free(pa);
}

//int pa[1000];
//int n;
//void Load() {
//	FILE* fin = fopen("C:\\лаб 18-19\\lb4.txt", "rt");
//	if (fin == NULL) {
//		printf("Входной файл не найден\n");
//		return;
//	}
//	fscanf(fin, "%d", &n);
//	for (int i = 0; i < n; i++) {
//		fscanf(fin, "%d", &pa[i]);
//	}
//	fclose(fin);
//}
//void SaveResult() {
//	float s;
//	float max = 0;
//	for (int i = 0; i < n; i += 1) {
//		if (max < pa[i]) {
//			max = pa[i];
//		}
//	}
//	s = (max * 2)/3;
//	int m = 0;
//	for (int i = 0; i < n; i += 1) {
//		if (pa[i] >= s) {
//			m += 1;
//		}
//	}
//	FILE* fout = fopen("C:\\лаб 18-19\\ex4.txt", "wt");
//	if (fout == NULL) {
//		printf("Выходной файл не найден\n");
//		return;
//	}
//	fprintf(fout, "%d\n", m);
//	for (int i = 0; i < n; i++) {
//		if (pa[i] >= s) {
//			fprintf(fout, "%d ", pa[i]);
//		}
//	}
//	fclose(fout);
//}
//void main() {
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	printf("Hello! It is Task4!\n");
//
//	Load();
//	SaveResult();
//}