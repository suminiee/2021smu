#include <stdio.h>
int num2(int num); //�Լ�����

int main(void)
{
	int input = 0;
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &input);
	num2(input); // �Լ�ȣ��
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
