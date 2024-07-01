#include <stdio.h>
int main(void) {
	float ave, max, min; //평균값 최댓값 최솟값 
	float n1, n2, n3, n4, n5; //입력받을 숫자 5개

	printf("1 번째 실수를 입력하시오. ");
	scanf_s("%f", &n1);
	printf("2 번째 실수를 입력하시오. ");
	scanf_s("%f", &n2);
	printf("3 번째 실수를 입력하시오. ");
	scanf_s("%f", &n3);
	printf("4 번째 실수를 입력하시오. ");
	scanf_s("%f", &n4);
	printf("5 번째 실수를 입력하시오. ");
	scanf_s("%f", &n5);

	ave = (n1 + n2 + n3 + n4 + n5) / 5;	//입력받은 숫자 5개를 5로 나누어 평균값을 구함
	
		
	max = n1;		//임의로 최댓값에 n1을 넣고, n2와 비교해보는 방식 -- n2는 n3, n3는 n4 , n4는 n5 비교하며 찾아냄
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;
	if (n5 > max)
		max = n5;
	

	min = n1;		//최댓값을 구하는 방법과 동일하게 작성 
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	if (n4 < min)
		min = n4;
	if (n5 < min)
		min = n5;
	
	printf("----결과----\n");
	printf("평균은 %.6f입니다.\n", ave);	//6자리까지 출력하기 위해서 %f에 %.6f사용 
	printf("최댓값은 %.6f입니다.\n", max);
	printf("최솟값은 %.6f입니다.\n", min);

} 
