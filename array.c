#include <stdio.h>
//Array declaration
/*int main(void){
	int arr[5];
	int sum=0, i;

	arr[0]=10, arr[1]=20,arr[2]=30,arr[3]=40,arr[4]=50;

	for(i=0;i<5;i++)
		sum +=arr[i];
	
	printf("Total : %d \n", sum);
	return 0;
} */


//Arraylnit
/*int main(void){
	int arr1[5]={1,2,3,4,5};
	int arr2[ ]={1,2,3,4,5,6,7};
	int arr3[5]={1,2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("Size of arr1 : %d \n", sizeof(arr1));
	printf("Size of arr2 : %d \n", sizeof(arr2));
	printf("Size of arr3 : %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for(i=0;i<ar1Len;i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for(i=0;i<ar2Len;i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for(i=0;i<ar3Len;i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
} */

//Array String
/* int main(void){
	char str[]="Good Morning!";
	printf("Size of str[] : %d \n", sizeof(str));
	printf("Null as Char : %c \n", str[13]);
	printf("Null as Int : %d \n", str[13]);

	str[12]='?';
	printf("%s \n", str);
	printf("Address : 0x%p \n", str);
	return 0;
} */


/* int main(void)
{
	char nu = '\0'; //save null
	char sp = ' '; //save space
	printf("%d %d", nu, sp);
	return 0;
} */

//Read String

/*int main(void){
	char str[50];
	int idx = 0;

	printf("Enter characters : ");
	scanf("%s", str);
	printf("Typed characters : %s \n", str);

	printf("Character unit output : ");
	while(str[idx] != '\0')
	{
		printf(" %c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
} */

//Start End String
/*int main(void){
	char str[50]="I like C programming";
	printf("string: %s \n", str);

	str[8]='\0';
	printf("string: %s \n", str);

	str[6]='\0';
		printf("string: %s \n", str);

	str[1]= '\0';
	printf("string: %s \n", str);
	return 0;
} */

//Arraylnit
/*int main(void){
	int v[5]={0,1,2,3,4};
	int i;

	for(i=0;i<5;i++)
		printf("v[%d] = %d \n", i, v[i]);

	return 0;
} */

