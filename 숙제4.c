#include <stdio.h>

int main() 
{
	double num1, num2, result = 1.0;
	char operator;

	printf("Input Arithmetic Operation\nex)      3.4 * 8.5\n         2.9 - 5.4\n         3.9 * 8.0\n         3.9 ^ 8\n");	//���� ���� ȭ�� �ۼ� 
	printf("input : ");//�� �Է¹ޱ�
	scanf_s("%lf %c %lf", &num1, &operator,sizeof(operator), &num2); //sizeof�� ����ϸ� ������ ���� �ʾƼ� ���

	if (operator == '+') {	//���ϱ� �����ڶ�� ����Ʈ�� ���
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2); 
	}
	else if (operator == '-') {	//���� �����ڶ�� ����Ʈ�� ���
		printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
	}
	else if (operator == '*') { //���ϱ� �����ڶ�� ����Ʈ�� ���
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 * num2);
	}
	else if (operator == '/') {	//������ �����ڶ�� ����Ʈ�� ���
		printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
	}
	else if(operator == '^') { //�ŵ����� �����ڶ�� ����Ʈ�� ��� 
		for (int k = 0; k < num2; k++) { //num2Ƚ����ŭ ���� 
			result = result * num1;     
			}
		printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result); 
	}
	else { //���İ� ���� ������ 
		printf("ex)�� ��ġ�ϰ� �Է��ϼ���:"); 
	}
}
