#include <stdio.h>
int main(void) {
	int n, r, k;
	int num_1 = 1, num_2 = 1, num_3 = 1, num_4 = 1, num_5 = 1, num_6 = 1;

	printf("n과 r을 입력하세요 :");
	scanf_s("%d %d", &n, &r);
	
	for (k = 1; k <= n; k++) { //n!을 나타내는것
		num_1 = num_1 * k;
	}
	for (k = 1; k < n - r; k++) { //(n-r)!을 나타내는것
		num_2 = num_2 * k;
	}
	for (k = 1; k <= r; k++) {	//r!을 나타내는것
		num_3 = num_3 * k;
	}
	for (k = 1; k < n + r - 1; k++) { //(n+r-1)!을 나타내는것
		num_4 = num_4 * k;
	}
	for (k = 1; k < n - 1; k++) { //(n-1)!을 나타내는것
		num_5 = num_5 * k;
	}
	for (k = 0; k < r; k++) { //n을 r번 곱함 n ^ r
		num_6 = num_6 * n;

	}

	printf("순열:%d\n", num_1 / num_2);
	printf("중복순열:%d\n", num_6);
	printf("조합:%d\n", num_1 / (num_2 * num_3));
	printf("중복조합:%d\n", num_4 / (num_5 * num_3));

	return 0;



}
