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
void ShowArrayElem( int  * param, int len){
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
}
