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

	printf("1���� 100������ ��\n%d\n", sum);

	return 0;
}

