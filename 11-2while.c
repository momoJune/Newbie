#include<stdio.h>
#define MAX 100000

int main(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	int count = 0;
	int number = 1;
	int multiple;

	while (number <= MAX)
	{
		multiple = number % 7;
		
		if (multiple == 0) {
			count++;
		}
		
		number++;
	}

	printf("1���� 100000������ 7�� ����� ����\n%d\n", count);

	return 0;
}

