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

	printf("1부터 100000까지중 7의 배수의 개수\n%d\n", count);

	return 0;
}

