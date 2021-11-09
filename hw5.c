#include <stdio.h>
int main() {
	
	int arr[5];
	int even[5];
	int odd[5];
	int i;

	printf("5개의 정수를 입력하세요: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("짝수출력: %d\n", arr[i]);
		}
		else if (arr[i] % 2 != 0)
		{
			printf("홀수출력: %d\n", arr[i]);
		}
	}

	return 0;
}