#include <stdio.h>

int main(void)
{
	int n; //�Է¹��� n 
	int k, first = 0, second = 1; //�Ǻ���ġ���� ù��° �ι�° ���� 0�� 1�� ������

	printf("n �Է�: "); 
	scanf_s("%d", &n); 

	
	for (k = 1; k <= n-1 ; k++) { 
		first = first + second; // �ι�°�� 0 + 1 = 1 , ����°�� 1 + 0 = 1 , �׹�°�� 1 + 1 = 2, �ټ���°�� 2 + 1 = 3
								//�������� ���
		second = first - second; //1 - 1 = 0 , 1 - 0 = 1 , 2 - 1 = 1, 3 - 1 = 2
								//�������� ���Ҷ� ��� 
	}

	printf("n��° �Ǻ���ġ�� : %d", first);
}
