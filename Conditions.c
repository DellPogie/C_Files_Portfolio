#include <stdio.h>

void guessNumber(int guess) {
	if (guess < 444) {
		printf("Your guess is too low. \n");
	} else if (guess > 444) {
		printf("Your guess is too high. \n");
	} else {
		printf("Correct! \n");
	}
}

int main() {
	guessNumber(300);
	guessNumber(500);
	guessNumber(444);
	guessNumber(100);
	guessNumber(900);
}