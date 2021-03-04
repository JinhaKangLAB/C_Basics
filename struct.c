#include <stdio.h>
/*void ClearLineFromReadBuffer(void){
	while(getchar()!='\n');
}
int main(void)
{
	char perID[7];
	char name[10];
	fputs("6 numbers : ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();

	fputs("name : ", stdout);
	fgets(name, sizeof(name), stdin);
	printf("Number : %s \n", perID);
	printf("name : %s \n", name);
	return 0;
} */
//
/*#include <string.h>

void RemoveBSN(char str[ ])
{
	int len=strlen(str);
	str[len-1]=0;
}

int mian(void)
{
	char str[100];
	printf(" Enter: ");
	fgets(str, sizeof(str), stdin);
	printf("length : %d, text : %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("length : %d, text : %s \n", strlen(str), str);
	return 0;
} */

/*#include <string.h>
int main(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//*****Case1******
	strcpy(str2, str1);
	puts(str2);

	//*****Case2*****
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	//*****Case3****
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3)-1]=0;
	puts(str3);
	return 0;
}*/

/*#include <string.h>
int main(void){
	char str1[20]="First~";
	char str2[20]="Second";

	char str3[20]="Simpel num : ";
	char str4[20]="1234567890";

	//*******case 1*****
	strcat(str1, str2);
	puts(str1);

	//*****case2*****
	strncat(str3, str4, 7);
	puts(str3);
	return 0;
} */
/*#include <string.h>
int main(void)
{
	char str1[20];
	char str2[20];
	printf("string 1 :");
	scanf("%s", str1);
	printf("string 2: ");
	scanf("%s", str2);
	
	if(!strcmp(str1, str2))
	{
		puts("same");
	}
	else
	{
		puts("not same");
		if(!strncmp(str1, str2, 3))
			puts("but three words are same");
	}
return 0;
} */
/*#include <stdlib.h>
int main(void)
{
	char str[20];
	printf("integer : ");
	scanf("%s", str);
	printf("%d \n", atoi(str));
	printf("float : ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}*/

/*struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main()
{
	return 0;
}*/

/*struct point
{ 
	int xpos;
	int ypos;
};

int main(void){
	struct point pos1, pos2;
	double distance;
	fputs("point 1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	fputs("point 2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos--pos2.ypos)*(pos1.ypos-pos2.ypos)));
	printf(" %g \n", distance);
	return 0;
}*/

//19
/*struct group{
	int num;
	double grade;
};
int main(void){
struct group s1;
s1.num = 2;
s1.grade = 2.7;
printf("Num : %d \nGrade : %g\n", s1.num, s1.grade);
return 0;
} */

/*#include <string.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void){
	struct person man1, man2;
	strcpy(man2.name, "Ann");
	strcpy(man1.phoneNum, "010-2210-2112");
	man1.age=23;

	printf("name : "); scanf("%s", man2.name);
	printf("Number : "); scanf("%s", man2.number);
	*/
struct point{
	int xpos;
	int ypos;
}
struct person{
	char name[20];
	char phoneNum[20];
	int age;
int main(void){
	struct point pos={10,20};
	struct person man={"John", "010-2018-2021", 21);
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
}
