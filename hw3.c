#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int inputnum;
	int i;
	bool result = true; //true is prime, false is not prime

	do
	{
		printf("Please enter a number: ");
		scanf("%d", &inputnum);
	} while (inputnum < 2);
	
	
	for (i = 2; inputnum > i; i++)
	{
		if (inputnum % i == 0)
		{
			result = false;
			break;
		}
				
	}

	if (result == false)
	{
		printf("It's not a prime number");
	}
	else
	{
		printf("It's a prime number");
	}
	return 0;
}