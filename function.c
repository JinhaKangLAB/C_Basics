#include <stdio.h>
/*void main()
{
	int num1, num2;
	num1=printf("12345\n");
	num2=printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	//return 0; -> int 
} */

/*int Add(int num1, int num2){
	return num1+num2;
}

int main(void){
	int result;
	result = Add(3 ,4);
	printf("Total 1 : %d \n", result);
	result = Add(5, 8);
	printf("Total 2 : %d \n", result);
	return 0;
}*/

/*int Add(int num1, int num2)
{
	return num1+num2;
}

void ShowAddResult(int num)
{
	printf("Total : %d \n", num);
}
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("If you enter two integers, the addtion result will come out.\n");
	printf("Enter two differnet integers. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1=ReadNum();
	num2=ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
} */

/*int Increment(int n){
	n++;
	return n;
}

int main(void){
	int num=2;
	num=Increment(num);
	printf("%d\n", num);
	return 0;
} */
 
/*int Increment(int n);  //함수의 선언
int main(void){
	int num=2;
	num=Increment(num); //함수의 호출
	printf("%d\n", num);
	return 0;

//함수의 정의
int Increment(int n){
	n++;
	return n;
} */


/*int NumberComapre(int, int);
int main(void)
{
	printf("The largest number of 3 and 4 is %d.\n", NumberCompare(3,4));
	printf("The largest number of 7 and 2 is %d.\n", NumberCompare(7,2));
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
} */

/*int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void){
	int num1, num2;
	printf("Enter two numbers.");
	scanf("%d %d", &num1, &num2);
	printf("Among %d and %d, the integer with the largest absolute value is : %d.\n", 
	num1, num2, AbsoCompare(num1, num2));
	return 0;
}

int AbsoCompare(int num1, int num2){
	if(GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoVaule(int num){
	if(num<0)
		return num*(-1);
	else
		return num;
}*/ //error

/*int main(void)
{
	int cnt;
	for(cnt=0;cnt<3;cnt++)
	{
		int num=0;
		num++;
		printf("%d Iteration, local variable num : %d.\n", cnt+1, num);
	}

	if(cnt==3)
	{ int num=7;
	num++;
	*/

/* void Add(int val);
int num;

int main(void){
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void Add(int val)
{
	num +=val;
} */

/* int Add(int val);
int num=1;

int main(void)
{
	int num=5;
	printf("num : %d \n", Add(3));
	printf("num : %d \n", num+9);
	return 0;
}

int Add(int val)
{
	int num=9;
	num += val;
	return num;
} */

/*void SimpleFunc(void){
	static int num1=0;
	int num2=0;
	num1++, num2++;
	printf("static : %d, local: %d \n", num1, num2);
}

int main(void)
{
	int i;
	for(i=0;i<3;i++)
		SimpleFunc();
	return 0;
} */

// Recursive
/*int Recursive(int num){
	if(num<=0)
		return;
	printf("Recursive call! %d \n", num);
	Recursive(num-1);
}

int main(void){
	Recursive(3);
	return 0;
} */

//Factorial
/*int Factorial(int n)
{
	if(n==0)
		return 1;
	else
		return n * Factorial(n-1);
}
int main(void){
	printf("1! = %d \n", Factorial(1));
	printf("2! = %d \n", Factorial(2));
	printf("3! = %d \n", Factorial(3));
	printf("4! = %d \n", Factorial(4));
	printf("9! = %d \n", Factorial(9));
	return 0;
} */
