#include <stdio.h>
int main(void)
{
	int year; //입력받을 년도 
	printf("년도를 입력하세요 :");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0) //4로 나누어 떨어지는 해는 윤년
		printf("윤년");
	else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) //4와 100으로 나누어 떨어지는 해는 평년 
		printf("평년");
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) //4와 100 그리고 400으로 나누어 떨어지는 해는 윤년
		printf("윤년");
}

