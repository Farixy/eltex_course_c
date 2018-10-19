#include <stdlib.h> 
#include "complex.h"

int main() {
	struct complex a,b,result;
	struct complex_res result_divide;
	int choose=0;
	while(1) {
	printf("Choose\n");
    	printf("1. +\n");
        printf("2. -\n");
        printf("3. *\n");
        printf("4. /\n");
        printf("5. Quit\n");
	scanf("%d", &choose);
 	switch (choose) {
		case 1:	{
			printf("First complex number\n");
			scanf("%d %d", &a.real, &a.img);
			printf("Second complex number\n");
			scanf("%d %d", &b.real, &b.img);
			add(a.real,a.img,b.real,b.img,&result.real,&result.img);
			if (result.img>=0) printf("Answer = %d+%di\n",result.real, result.img);
			else printf("Answer = %d%di\n",result.real, result.img);
			break;
		}
		case 2:	{
			printf("First complex number\n");
			scanf("%d %d", &a.real, &a.img);
			printf("Second complex number\n");
			scanf("%d %d", &b.real, &b.img);
			subtract(a.real,a.img,b.real,b.img,&result.real,&result.img);
			if (result.img>=0) printf("Answer = %d+%di\n",result.real, result.img);
			else printf("Answer = %d%di\n",result.real, result.img);
			break;
		}
		case 3:	{
			printf("First complex number\n");
			scanf("%d %d", &a.real, &a.img);
			printf("Second complex number\n");
			scanf("%d %d", &b.real, &b.img);
			multiply(a.real,a.img,b.real,b.img,&result.real,&result.img);
			if (result.img>=0) printf("Answer = %d+%di\n",result.real, result.img);
			else printf("Answer = %d%di\n",result.real, result.img);
			break;
		}
		case 4:	{
			printf("First complex number\n");
			scanf("%d %d", &a.real, &a.img);
			printf("Second complex number\n");
			scanf("%d %d", &b.real, &b.img);
			divide(a.real,a.img,b.real,b.img,&result_divide.real1,&result_divide.real2,&result_divide.img1, &result_divide.img2);
			printf("Answer \n");			
			printf("%d    %di\n",result_divide.real1, result_divide.img1);
			printf("-----------------\n");
			printf("%d    %d\n",result_divide.real2, result_divide.img2);
			break;
		}
		case 5:
			printf("Bye Bye!\n");
			_Exit(EXIT_SUCCESS);
		default:
			printf("Wrong choose\n");
		}
	}
	return 0;
}
