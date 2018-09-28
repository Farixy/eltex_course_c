#include <stdio.h>

#define N 3

int main() {
	int a[N][N];
	int i = 0, j = 0;
	int count = 1, count_repeat = 0;
	int action = 1;
	int buffer = 0;
	for (i = 0; i < N; i++)
	for (j = 0; j < N; j++) {
		a[i][j] = 0;
	}
	i = 0; j = 0;
	while (1) {
		printf("%d %d\n",i,j);
		a[i][j] = count;
		if (a[i][j]==count) count_repeat++;
		if ((i<N) || (j<N)) {
			if (action==1) { j++; count++; }
			if (action==2) { i++; count++; }
			if (action==3) { j--; count++; }
			if (action==4) { i--; count++; }
			printf("Flag action\n");
		}
		//if (a[i][j]==count) count_repeat++;
		if (count_repeat>5) { action++; printf("Action = %d \n",action); count_repeat = 0; }
		//if ((count_repeat==3) && (action==4)) { action = 0; count_repeat = 0;}
		if (count_repeat==N*N) break;
		//if (count_repeat==20) break;
		printf("Count repaet = %d, Count = %d\n", count_repeat, count);
	}
	for (i = 0; i < N; i++) {
	for (j = 0; j < N; j++) {
		printf("%d  ",a[i][j]);
		}
	printf("\n");
	}
	return 0;
}
