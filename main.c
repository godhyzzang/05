#include <stdio.h>

int main() {
	
	int inputnumber;
	scanf_s("%i", &inputnumber);

	if (inputnumber < 0)
		printf("%i", -inputnumber);
	else
		printf("%i", inputnumber);

}