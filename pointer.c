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

/* int main(void){

	int num1=100, num2=100;
	int * pnum;
	
	pnum=&num1;
	(*pnum)+=30;

	pnum=&num2;
	(*pnum)-=30;

	printf("num1%d, num2:%d \n", num1, num2);
	return 0;
} */

/*int main(void){
	float f=10.3;
	float *p;

	printf(" Before : %.1f\n", f);
	p = &f;		
	*p=30.5;
	printf(" After : %.1f\n", f);	

	*&f = 40.2f;
	printf("%.1f\n", f);

	return 0;
} */

/* int main()
{
	int a;
	int *pa;
	pa= &a;
	*pa=10;

	printf("output 'a' with pointer :  %d\n" , *pa);
	printf("oupt put 'a' with variation name : %d\n", a);
} */

int main(){
	int a = 10, b =15, tot;
	double avg;
	int *pa, *pb;
	int *pt = &tot;
	double *pg=&avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf(" %d %d\n", *pa, *pb);
	printf(" Total : %d\n", *pt);
	printf(" Average : %.1f\n", *pg);
}
