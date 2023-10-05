#include <stdio.h>

int main() {
	//6

	int correct_num = 6;
	int input_num;
	int trial = 0;


	while (1) {
		//true 빌드 왜 안되지..? 식별자 True정의되어있지 않다고 나옴 
		trial += 1;
		printf("input a number\n");
		scanf_s("%i", &input_num);

		if (input_num < correct_num) {
			printf("please input BIGGER number\n\n");
			/*trial += 1;*/
			/*continue;*/
		}

		else if (input_num > correct_num) {
			printf("please input Smaller number\n\n");
			/*trial += 1;*/
			/*continue;*/
		}

		else {
			printf("correct\n");
			printf("Your trial : %i", trial);
			break;
		}


		//break;
	}



}