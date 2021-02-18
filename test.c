#include <stdio.h>
/* int set_idx(int * v, int n){
	int i;
	for(i=0;i<n;i++)
		v[i]=i;
}

int main (void){
	int i;
	int a[5];

set_idx(a, 5);
for(i=0;i<5;i++)
	printf("a[%d]= %d\n",i ,a[i]);

return 0;
} */
/*int set_idx(int * v, int n){
	int i;
	for(i=0;i<n;i++)
		v[i]=i;
}

int main (void){
	int i;
	int a[5];

set_idx(a, 5);
for(i=0;i<5;i++)
	printf("a[%d]= %d\n",i ,a[i]);

return 0;
} */
//TwoDImArraySize
int main(void){
	int arr1[3][4];
	int arr2[7][9];
	printf("rows : 3, colums : 4  = %d \n", sizeof(arr1));
	printf("rows : 7, colums : 9 =  %d \n", sizeof(arr2));
	return 0;
}
