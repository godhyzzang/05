#include <stdio.h>

int main() {
	//4. ���� ���α׷�
	//�Է��� ���ڸ� 1���� �ش� ���ڱ��� ��� ���ϴ� ���
	int number;
	int sum=0; //sum 0 �ʱ�ȭ�ؾ���
	
	printf("input a number");
	scanf_s("%i", &number);

	for (int i = 0; i < number; i++) {
		
		
		sum += (i+1);
	}
	
	printf("Total : %i",sum);

}