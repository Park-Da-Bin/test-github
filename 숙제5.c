#include <stdio.h>
int main(void) {
	int k, j, floor; //�ݺ����� ����� ���� k,j,floor(��) ���

	printf("���� �Է��Ͻÿ�.");
	scanf_s("%d", &floor);

	for (k = 1; k <= floor; k++) {	//���� ���� �� �Է� 
		for (j = 1; j <= k; j++) {
			printf("*");
		}
		for (j = floor * 2 - 2; j >= k * 2 - 1; j--) {	//���� X 2 ���� �Է��� * ���� ���� ���� 
			printf(" ");
		}
		for (j = 1; j <= k; j++) {	//���� ������ �� �Է�
			printf("*");
		}
		printf("\n");
	}
	for (k = 1; k <= floor - 1; k++){	//���� ���� �� �Է� 
		for (j = floor - 1; j >= k; j--) {
			printf("*");
		}
		for (j = 1; j <= k * 2; j++) {	//���� �ݴ��̹Ƿ� �ڷΰ� ���� ���� ������ 
			printf(" ");
		}
		for (j = floor - 1; j >= k; j--) {	//���� ������ �� �Է�
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
