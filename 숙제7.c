#include <stdio.h>
int main(void) {
	int n, r, k;
	int num_1 = 1, num_2 = 1, num_3 = 1, num_4 = 1, num_5 = 1, num_6 = 1;

	printf("n�� r�� �Է��ϼ��� :");
	scanf_s("%d %d", &n, &r);
	
	for (k = 1; k <= n; k++) { //n!�� ��Ÿ���°�
		num_1 = num_1 * k;
	}
	for (k = 1; k < n - r; k++) { //(n-r)!�� ��Ÿ���°�
		num_2 = num_2 * k;
	}
	for (k = 1; k <= r; k++) {	//r!�� ��Ÿ���°�
		num_3 = num_3 * k;
	}
	for (k = 1; k < n + r - 1; k++) { //(n+r-1)!�� ��Ÿ���°�
		num_4 = num_4 * k;
	}
	for (k = 1; k < n - 1; k++) { //(n-1)!�� ��Ÿ���°�
		num_5 = num_5 * k;
	}
	for (k = 0; k < r; k++) { //n�� r�� ���� n ^ r
		num_6 = num_6 * n;

	}

	printf("����:%d\n", num_1 / num_2);
	printf("�ߺ�����:%d\n", num_6);
	printf("����:%d\n", num_1 / (num_2 * num_3));
	printf("�ߺ�����:%d\n", num_4 / (num_5 * num_3));

	return 0;



}
