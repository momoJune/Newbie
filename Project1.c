//countMultiples.c
/*
기능: 1에서 100000까지 수들에서 수를 세고, 7의 배수인지 확인하여 7의 배수이면 세고, 그때 개수와 7의 배수를 출력한다. 그리고 마지막으로 전체 개수를 출력한다
작성자  : 박준모
작성 일자: 210930
*/

#include<stdio.h> 

#define MAX 100000  //매크로 상수들
#define MULTIPLE 7

    
int main(int argc, char* argv[]);// 함수 선언

int main(int argc, char* argv[])// 함수 정의
{
    unsigned int count = 0;
    unsigned int number;
    unsigned int remainder;

    printf("개수\t\t\t7의 배수\n"); //제목 출력

    for (number = 1; number <= MAX; number++) //수가 MAX보다 작거나 같은 동안 반복한다
    {
        remainder = number;
        remainder = remainder % MULTIPLE; //나머지 구하기
        
        if (remainder == 0) //나머지가 0이면
        {
            count++; //count = count + 1

            printf("%d\t\t\t%d\n", count, number); //개수와 수를 출력한다
        }
        
    }
    printf("7의 배수 개수 : %d\n", count); // 개수 출력


    return 0;
}

