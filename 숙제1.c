#include <stdio.h>
int main(void) {
	float ave, max, min; //��հ� �ִ� �ּڰ� 
	float n1, n2, n3, n4, n5; //�Է¹��� ���� 5��

	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &n1);
	printf("2 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &n2);
	printf("3 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &n3);
	printf("4 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &n4);
	printf("5 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &n5);

	ave = (n1 + n2 + n3 + n4 + n5) / 5;	//�Է¹��� ���� 5���� 5�� ������ ��հ��� ����
	
		
	max = n1;		//���Ƿ� �ִ񰪿� n1�� �ְ�, n2�� ���غ��� ��� -- n2�� n3, n3�� n4 , n4�� n5 ���ϸ� ã�Ƴ�
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	if (n4 > max)
		max = n4;
	if (n5 > max)
		max = n5;
	

	min = n1;		//�ִ��� ���ϴ� ����� �����ϰ� �ۼ� 
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min = n3;
	if (n4 < min)
		min = n4;
	if (n5 < min)
		min = n5;
	
	printf("----���----\n");
	printf("����� %.6f�Դϴ�.\n", ave);	//6�ڸ����� ����ϱ� ���ؼ� %f�� %.6f��� 
	printf("�ִ��� %.6f�Դϴ�.\n", max);
	printf("�ּڰ��� %.6f�Դϴ�.\n", min);

} 
