//countMultiples.c
/*
���: 1���� 100000���� ���鿡�� ���� ����, 7�� ������� Ȯ���Ͽ� 7�� ����̸� ����, �׶� ������ 7�� ����� ����Ѵ�. �׸��� ���������� ��ü ������ ����Ѵ�
�ۼ���  : ���ظ�
�ۼ� ����: 210930
*/

#include<stdio.h> 

#define MAX 100000  //��ũ�� �����
#define MULTIPLE 7

    
int main(int argc, char* argv[]);// �Լ� ����

int main(int argc, char* argv[])// �Լ� ����
{
    unsigned int count = 0;
    unsigned int number;
    unsigned int remainder;

    printf("����\t\t\t7�� ���\n"); //���� ���

    for (number = 1; number <= MAX; number++) //���� MAX���� �۰ų� ���� ���� �ݺ��Ѵ�
    {
        remainder = number;
        remainder = remainder % MULTIPLE; //������ ���ϱ�
        
        if (remainder == 0) //�������� 0�̸�
        {
            count++; //count = count + 1

            printf("%d\t\t\t%d\n", count, number); //������ ���� ����Ѵ�
        }
        
    }
    printf("7�� ��� ���� : %d\n", count); // ���� ���


    return 0;
}

