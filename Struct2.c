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



/*#include <stdio.h>
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
}*/

#include <stdio.h>
/*struct point{
	int xpos;
	int ypos;
};

int main(void){
	struct point arr[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter x and  y's positions : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for(i=0;i<3;i++)
		printf("[%d, %d]", arr[i].xpos, arr[i].ypos);
	return 0;
} */

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main(void)
{
	struct person arr[3]={
		{"Lee", "010-2081-2828", 21},
		{"Jung", "192-2912-2192", 22},
		{"Han", "102-2912-1223", 19}
	};
	int TotalAge;
	int i;
	for(i=0;i<3;i++){
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
    	TotalAge += arr[i].age;
}
	printf("Average Age :  %.1f \n", TotalAge/3.0);
	return 0;
}

#include <stdio.h>
/*struct point{
	int xpos;
	int ypos;
};

int main(void){
	struct point arr[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter x and  y's positions : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}
	for(i=0;i<3;i++)
		printf("[%d, %d]", arr[i].xpos, arr[i].ypos);
	return 0;
} */

/*struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
int main(void)
{
	struct person arr[3]={
		{"Lee", "010-2081-2828", 21},
		{"Jung", "192-2912-2192", 22},
		{"Han", "102-2912-1223", 19}
	};
	int TotalAge;
	int i;
	for(i=0;i<3;i++){
		printf("%s %s %d \n", arr[i].name, arr[i].phoneNum, arr[i].age);
    	TotalAge += arr[i].age;
}
	printf("Average Age :  %.1f \n", TotalAge/3.0);
	return 0;
} */

/*   struct point{
	int xpos;
	int ypos;
};

int main(void){
	struct point pos1={1,2};
	struct point pos2={100,200};
	struct point * pptr = &pos1;

	(*pptr).xpos +=4;
	pptr->ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	return 0;
} */

struct point
{
	int xpos;
	int ypos;
};

/*struct circle
{
	double radius;
	struct point * center;
};

int main(void)
{
	struct point cen={2, 7};
	double rad=5.5;
	struct circle ring={rad, &cen};
	printf(" half : %g \n", ring.radius);
	printf(" center [ %d %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
} */

/*struct point
{
	int xpos;
	int ypos;
	struct point * ptr;
};

int main(void){
	struct point pos1={1,1};
	struct point pos2={2,2};
	struct point pos3={3,3};
	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf(" Connection of dots \n");
	printf("[%d, %d] and [%d, %d] \n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d] and [%d, %d] \n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d] and [%d, %d] \n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
	return 0;
} */

/*#include <stdio.h>
struct point
{
	int xpos;
	int ypos;
};

struct person
{
    char name[20];
    char phoneNumb[20];
    int age;
};

int main(void)
{
    struct point pos={10,20};
    struct person man={"Lee","010-2019-2010",21};
    
    printf("%p %p \n", &pos, &pos.xpos);
    pirntf("%p %p \n", &man, &man.name);
    return 0;
}*/
