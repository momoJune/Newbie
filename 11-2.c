#include <stdio.h>
#define MAX 100000

int main(int argc, char* argv[]);

int main(int argc, char* argv[])
{
	int count = 0;
	int number;
	int multiple;

	for (number = 1; number <= MAX; number++)
	{
		multiple = number % 7;
			
			if (multiple == 0){
				count++;
				}
			
	}

	printf("총7의 배수의 개수\n%d\n", count);

	return 0;
}

