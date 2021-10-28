#include <stdio.h>
#define MAX 100

int main(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	int sum = 0;
	int number;

	for (number = 1; number <= 100; number++)
	{

		sum += number;
		
	}

	printf("1부터 100까지의 합\n%d\n", sum);

	return 0;
}

