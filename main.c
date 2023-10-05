#include <stdio.h>

int main() {
	//4. 덧셈 프로그램
	//입력한 숫자를 1부터 해당 숫자까지 모두 더하는 계산
	int number;
	int sum=0; //sum 0 초기화해야함
	
	printf("input a number");
	scanf_s("%i", &number);

	for (int i = 0; i < number; i++) {
		
		
		sum += (i+1);
	}
	
	printf("Total : %i",sum);

}