#include <stdio.h>
int main() {
	
	int arr[5];
	int even[5];
	int odd[5];
	int i;

	printf("5���� ������ �Է��ϼ���: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("¦�����: %d\n", arr[i]);
		}
		else if (arr[i] % 2 != 0)
		{
			printf("Ȧ�����: %d\n", arr[i]);
		}
	}

	return 0;
}