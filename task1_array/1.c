#include <stdio.h>

#define N 6

/*
Программа заполняет матрицу и последовательно меняет четные и нечетные столбцы.
*/

void print_array(int a[][N]) {
	int i = NULL, j = NULL;
	for (i = 0; i < N; i++) {
	for (j = 0; j < N; j++) {
		printf("%d    ",a[i][j]);
		}
	printf("\n");
	}
}

int main() {
	int a[N][N];
	int count = 1;
	int i = NULL, j = NULL;
	for (i = 0; i < N; i++) 
	for (j = 0; j < N; j++) {
		a[i][j] = count;
		count++;
	}
	printf("Before\n");
	print_array(a);
	for (i = 0; i < N; i++)
	for (j = 0; j < N; j++) {
		if (j%2==0) {
			a[i][j+1] = a[i][j] + a[i][j+1];
			a[i][j] = a[i][j+1] - a[i][j];
			a[i][j+1] = a[i][j+1] - a[i][j]; 
		}
	}
	printf("After\n");
	print_array(a);
	return 0;
}
