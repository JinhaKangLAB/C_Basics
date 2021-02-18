#include <stdio.h>
//ArraryParam.c
/*void ShowArrayElem(int *param, int len)
{
	int i;
	for(i=0; i<len; i++)
	printf("%d ", param[i]);
	printf("\n");
}

int main(void){
	int arr1[3]={1,2,3};
	int arr2[5]={4,5,6,7,8};
	ShowArrayElem(arr1, sizeof(arr1)/sizeof(int));
	ShowArrayElem(arr2, sizeof(arr2)/sizeof(int));
	return 0;} */

//Array Param Access
/*void ShowArrayElem( int  * param, int len){
	int i;
	for(i=0;i<len;i++)
		printf("%d ", param[i]);
		printf("\n");
}
void AddArrayElem(int * param, int len, int add){
	int i;
	for(i=0;i<len;i++)
		param[i] += add;
}
int main(void){
	int arr[3]={1,2,3};
	AddArrayElem(arr, sizeof(arr)/sizeof(int),1);
	ShowArrayElem(arr, sizeof(arr)/sizeof(int));
	AddArrayElem(arr, sizeof(arr)/sizeof(int),2);
	ShowArrayElem(arr, sizeof(arr)/sizeof(int));
	AddArrayElem(arr, sizeof(arr)/sizeof(int),3);
	ShowArrayElem(arr, sizeof(arr)/sizeof(int));
	return 0;
}*/

//Call by Value Swap
/*void Swap(int n1, int n2){
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("n1 n2 : %d %d \n", n1, n2);
}
int main(void){
	int num1=10;
	int num2=20;
	printf("num1 num2 : %d %d \n", num1, num2);

	Swap(num1, num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
} */

//CallbyReference
/*void Swap(int * ptr1, int * ptr2)
{ 
	int temp = * ptr1;
	* ptr1 = * ptr2;
	* ptr2 = temp;
}

int main(void){
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2);
	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
} */

/*int main(void){
	double PI=3.1415;
	double rad;
	PI=3.07;
	scanf("%lf", &rad);
	printf("circle are %f \n", rad*rad*PI);
	return 0;
}*/
/* int main(void){
	const double PI=3.1415;
	double rad;
	PI=3.07; //error
	scanf("%lf", &rad);
	printf("circle are %f \n", rad*rad*PI);
	return 0;
} */
