#include <stdio.h>

/*int main(void){
	FILE * fp=fopen("simple.txt", "wt");
	if(fp==NULL){
		puts("Fail!");
		return -1;
	}
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
} */
/*int main(void){
	char str[30];
	int ch;
	FILE * fp=fopen("simple.txt", "rt");
	if(fp==NULL) {
		puts("Fail!");
		return -1;
	}
	ch=fgetc(fp);
	printf("%c \n", ch);
	ch=fgetc(fp);
	printf("%c \n", ch);
	
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);
	return 0;
} */

/*int main(void)
{ 
	FILE * src=fopen("src.txt", "rt");
	FILE * des=fopen("des.txt", "wt");
	int ch;
	if(src==NULL || des==NULL){
		puts("Cannot open the file!");
		return -1;
	}
	while((ch=fgetc(src))!=EOF)
		fputc(ch, des);
	if(feof(src)!=0)
		puts("File copy compelte!");
	else
		puts("File copy incomplete!");
	fclose(src);
	fclose(des);
	return 0;
} */

/*int main(void){
	FILE * src=fopen("src.txt", "rt");
	FILE *des=fopen("des.txt", "wt");
	char str[20];

	if(src==NULL || des==NULL){
		puts("Cannot open the file!");
		return -1;
	}
	while(fgets(str, sizeof(str), src)!=NULL)
		fputs(str, des);
	if(feof(src)!=0)
		puts("File copy complete!");
	else
		puts("File copy incomplelte!");

	fclose(src);
	fclose(des);
	return 0;
} */

/*int main(void)
{
	char name[10];
	char sex;
	char age;
	FILE * fp=fopen("friend.txt", "wt");
	int i;
	for(i=0;i<3;i++)
	{
		printf("Name, Sex, Age : ");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
} */

/*int main(void)
{
	char name[10];
	char sex;
	int age;
	FILE * fp=fopen("friend.txt", "rt");
	int ret;
	while(1)
	{
		ret=fscanf(fp, "%s %c %d", name, &sex, &age);
		if(ret==EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}
		fclose(fp);
		return 0;
	} */
typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;

int main(void){
	Friend friend1;
	int ret;
	int max=0;
	int min=0;

	FILE * fp=fopen("friend.txt", "rt");

	while(1)
	{
		ret=fscanf(fp, "%s %c %d", friend1.name, &friend1.sex, &friend1.age);
		if(friend1.age > max)
			max=friend1.age;

		if(friend1.age < min)
			min=friend1.age;

		if(ret== EOF)
			break;
	}
		
	printf("Max age's person : %s %c %d \n", friend1.name, friend1.sex, friend1.age);
	printf("Min age's person : %s %c %d \n", friend1.name, friend1.sex, friend1.age);
	fclose(fp);
	return 0;
}
