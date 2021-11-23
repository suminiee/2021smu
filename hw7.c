#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double func(double num[], int size, double* mean, double* stdev)
{
	double sum = 0;
	double ssum = 0;
	double variance;//�л�
	int i;

	for (i = 0; i < size; i++) //��ü ��
	{
		sum = sum + num[i];
	}
	*mean = sum / size; //���
	for (i = 0; i < size; i++)
	{
		ssum += (num[i] - *mean) * (num[i] - *mean);
	}
	variance = ssum / size; //�л�
	*stdev = sqrt(variance); // ǥ������
}

int main(void)
{
	double num[5];
	int i;
	double mean, p_mean, p_stdev;

	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &num[i]);
	}
	func(num, 5, &p_mean, &p_stdev);
	printf("Standard Deviation = %.3lf", p_stdev);
	return 0;

}