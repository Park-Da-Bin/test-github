#include <stdio.h>

int main(void)
{
	int n; //입력받을 n 
	int k, first = 0, second = 1; //피보나치에서 첫번째 두번째 항은 0과 1로 고정임

	printf("n 입력: "); 
	scanf_s("%d", &n); 

	
	for (k = 1; k <= n-1 ; k++) { 
		first = first + second; // 두번째항 0 + 1 = 1 , 세번째항 1 + 0 = 1 , 네번째항 1 + 1 = 2, 다섯번째항 2 + 1 = 3
								//현재항을 계산
		second = first - second; //1 - 1 = 0 , 1 - 0 = 1 , 2 - 1 = 1, 3 - 1 = 2
								//다음항을 구할때 사용 
	}

	printf("n번째 피보나치값 : %d", first);
}
