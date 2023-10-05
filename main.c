#include <stdio.h>

int main() {
	//3
	
	char c;
	int num=0;
	scanf_s("%c", &c);
	

	while ((c=getchar())!='\n') {
		if('0'<=c && c<='9'){
			num += 1; 
		}
	}
	printf("number of int : %i",num);

	

}