#include <stdio.h>

#define N 9

/*
Программа для заполнения квадратной матрицы по спирали (N - нечетное)
*/

void func(int a[][N], int i, int j, int *number, int new_N,int i_max, int j_max) {
	for (int right = 0; right < new_N; right++) { if (j<=j_max-2) { j++; a[i][j] = ++*number; } }
	for (int down = 0; down < new_N-1; down++)  { if (i<=i_max-2) { i++; a[i][j] = ++*number; } }
	for (int left = 0; left < new_N-1; left++)  { j--; a[i][j] = ++*number; }
	for (int up = 0; up < new_N-2; up++)	{ i--; a[i][j] = ++*number; }
}

int main() { 
	int a[N][N]; 	
	int i = 0,j = -1; 
	int number = 0;
	for (int new_N  =  N, j_max = N, i_max = N; new_N >= 3; new_N = new_N - 2, i = i + 1, j = j + 1){
		if (new_N == N ) a[N/2][N/2] = N*N;
		func(a,i,j,&number,new_N,i_max,j_max);
		i_max--;
		j_max--;
	}
	for (i = 0; i < N; i++) {
	for (j = 0; j < N; j++) {
		printf("%d  ",a[i][j]);
		}
	printf("\n");
	}
	return 0;
}
