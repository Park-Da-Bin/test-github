#include <stdio.h>
int main(void) {
	int k, j, floor; //반복문에 사용할 변수 k,j,floor(층) 사용

	printf("값을 입력하시오.");
	scanf_s("%d", &floor);

	for (k = 1; k <= floor; k++) {	//제일 왼쪽 별 입력 
		for (j = 1; j <= k; j++) {
			printf("*");
		}
		for (j = floor * 2 - 2; j >= k * 2 - 1; j--) {	//층수 X 2 에서 입력한 * 개수 빼고 띄우기 
			printf(" ");
		}
		for (j = 1; j <= k; j++) {	//제일 오른쪽 별 입력
			printf("*");
		}
		printf("\n");
	}
	for (k = 1; k <= floor - 1; k++){	//제일 왼쪽 별 입력 
		for (j = floor - 1; j >= k; j--) {
			printf("*");
		}
		for (j = 1; j <= k * 2; j++) {	//위랑 반대이므로 뒤로갈 수록 많이 띄어야함 
			printf(" ");
		}
		for (j = floor - 1; j >= k; j--) {	//제일 오른쪽 별 입력
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
