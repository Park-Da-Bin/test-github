#include <stdio.h>
int main(void)
{
	int year; //�Է¹��� �⵵ 
	printf("�⵵�� �Է��ϼ��� :");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 && year % 400 != 0) //4�� ������ �������� �ش� ����
		printf("����");
	else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0) //4�� 100���� ������ �������� �ش� ��� 
		printf("���");
	if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) //4�� 100 �׸��� 400���� ������ �������� �ش� ����
		printf("����");
}

