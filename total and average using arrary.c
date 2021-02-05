#include <stdio.h>
int main(void){
	int score[10], i, sum=0;

	for(i=0;i<10;i++){
	printf("Enter %d student's score.\n", i+1);
	scanf("%d", &score[i]);
	sum+= score[i];
	}

	for(i=0;i<10;i++){
		printf("Student %d's score: %d \n", i+1, score[i]);
	}
	printf("Total : %d \nAverage : %d \n", sum, sum/10);

	return 0;
}

//random function
/*#include <stdlib.h>   
int main(void){
	int score[1000], i, sum=0;

	for(i=0;i<1000;i++){
	score[i]= rand() % 100+1;
	printf("%d\n", score[i]);
	sum+= score[i];
	}

	printf("Total : %d \nAverage : %.2f \n", sum, sum/1000.0); //자동 형 변환

	return 0;

} */
