#include <stdio.h>

/*int main(void){

	int num=7;
	int *pnum;
	pnum= &num;
	printf(" num's address : %p\n", &num);
	printf(" num's address : %p\n", pnum);

	return 0;
} */

/*int main(void)
{
	int num =10;
	int *pnum = &num;
	*pnum=20;
	printf("%d", *pnum);
} */

int main(void){

	int num1=100, num2=100;
	int * pnum;
	
	pnum=&num1;
	(*pnum)+=30;

	pnum=&num2;
	(*pnum)-=30;

	printf("num1%d, num2:%d \n", num1, num2);
	return 0;
}
