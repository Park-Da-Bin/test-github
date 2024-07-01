#include <stdio.h>
int main(void)
{
   int floor, blank, star, num; //층, 띄우기,별,입력받을 숫자

   printf("값을 입력하세요: ");
   scanf_s("%d", &num);

   for (floor = 1; floor <= num; floor++) //입력받고 층수를 결정 
   {
      for (blank = 1; blank <= num - floor; blank++) { //왼쪽에서부터 띄우기 -> 밑으로 갈수록 공백이 줄어든다
         printf(" ");
      }
      for (star = 1; star <= 2 * floor - 1; star++) 
      {
         if (star == 1 || star == 2 * floor - 1 || floor == num)//가장 왼쪽의 별의 위치, 가장 오른쪽의 별의 위치, 마지막 별 한줄 
            printf("*");
         else
            printf(" ");
      }
      printf("\n");
   }
}
