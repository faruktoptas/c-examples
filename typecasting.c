#include <stdio.h>

int main(){
	int num1 = 12;
	int num2 = 13;

	float ratio = (float) num1 / num2; // retunrs float
	printf("%f\n", ratio);

	printf("%c\n", (char)78); // prints char 78 

	for (int i = 32; i < 96; i++){ // print a block of ascii table
		printf("%c", (char)i);
	}
	return 0;
}