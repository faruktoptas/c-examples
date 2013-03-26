#include <stdio.h>

int main(int argc, char *argv[]){
	if (argc != 2){
		printf("Invlid parameters\n"); // correct arg count is 2 for our program
	} else {
		// argv[0] is the program name
		FILE *file;
		file = fopen(argv[1],"r"); // read filename from args
		if (file == 0){
			printf("Could not open file.\n");
		} else {
			int x;
			while ((x = fgetc(file)) != EOF){ // dump file contents
				printf("%c", x);
			}
			fclose(file);
		}
	}
	return 0;
}