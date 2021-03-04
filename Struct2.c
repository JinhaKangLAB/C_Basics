/*#include <stdio.h>

struct point{
	int xpos;
	int ypos;
};

struct person{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void){
	struct point pos={10,20};
	struct person man={"John", "010-2018-2021", 21);
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
	return 0;
} */

#include <stdio.h>
struct student{
	int id;
	char name[20];
	double grade;
};

int main(void){
	struct student one = {315, "Hong", 2.4};
	struct student two = {316,"Lee", 3.7};
	struct student three = {317, "Sae", 4.4};
	struct student max;
	max = one;
	printf("%d %s %f \n", one.id, one.name, one.grade);
	printf("%d %s %f \n", two.id, two.name, two.grade);
	printf("%d %s %f \n", three.id, three.name, three.grade);
		
	if(two.grade>max.grade){
		max = two;	
	}
	if(three.grade>max.grade){
		max = three;
	}
	printf("the highest score student's information : \n%d %s %f \n", max.id, max.name, max.grade);
	return 0;
}

