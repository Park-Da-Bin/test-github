#include <stdio.h>

int main() 
{
	double num1, num2, result = 1.0;
	char operator;

	printf("Input Arithmetic Operation\nex)      3.4 * 8.5\n         2.9 - 5.4\n         3.9 * 8.0\n         3.9 ^ 8\n");	//과제 실행 화면 작성 
	printf("input : ");//식 입력받기
	scanf_s("%lf %c %lf", &num1, &operator,sizeof(operator), &num2); //sizeof를 사용하면 에러가 나지 않아서 사용

	if (operator == '+') {	//더하기 연산자라면 프린트문 출력
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2); 
	}
	else if (operator == '-') {	//빼기 연산자라면 프린트문 출력
		printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
	}
	else if (operator == '*') { //곱하기 연산자라면 프린트문 출력
		printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 * num2);
	}
	else if (operator == '/') {	//나누기 연산자라면 프린트문 출력
		printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
	}
	else if(operator == '^') { //거듭제곱 연산자라면 프린트문 출력 
		for (int k = 0; k < num2; k++) { //num2횟수만큼 실행 
			result = result * num1;     
			}
		printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result); 
	}
	else { //형식과 맞지 않을때 
		printf("ex)와 일치하게 입력하세요:"); 
	}
}
