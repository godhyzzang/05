#include <stdio.h>

int main() {
	int whatkindofnumber;
	scanf_s("%i",&whatkindofnumber);

	if (whatkindofnumber == 0)
		printf("the number is 0");
	else if (whatkindofnumber < 0)
		printf("the number is negative");
	else
		printf("the number is positive");
}