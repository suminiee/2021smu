#include <stdio.h>
int num2(int num); //함수선언

int main(void)
{
	int input = 0;
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &input);
	num2(input); // 함수호출
	return 0;
}

int num2(int n)
{
	if (n == 0 || n == 1)
	{
		printf("%d", n);
	}
	else
	{
		num2(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}
