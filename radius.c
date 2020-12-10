#include <stdio.h>
int main(void) {

	float radius;
	float area;

	printf("원의 반지름을 입력하시오 : ");
	scanf_s("%f", &radius);


	area = 3.141592 * radius * radius;
	printf("원의면적: %f\n", area);

	return 0;
}