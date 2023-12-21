#include <stdio.h>

int factorial(int number);

int main() {
	
	printf("0! = %i \n", factorial(0));
	printf("1! = %i \n", factorial(1));
	printf("3! = %i \n", factorial(3));
	printf("5! = %i \n", factorial(5));
	printf("7! = %i \n", factorial(7));
	printf("9! = %i \n", factorial(9));
	printf("11! = %i \n", factorial(11));
	printf("13! = %i \n", factorial(13));
	printf("15! = %i \n", factorial(15));
	printf("17! = %i \n", factorial(17));
	printf("19! = %i \n", factorial(19));
	printf("21! = %i \n", factorial(21));
	printf("23! = %i \n", factorial(23));
	printf("25! = %i \n", factorial(25));
}

int factorial(int number) {
	if (number > 1) {
		return number * factorial(number - 1);
	}
	else {
		return 1;
	}
}