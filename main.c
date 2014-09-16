#include "stdio.h"
#include "minic.h"

int main(int argc, char const *argv[]){
	
	if (argc == 2){
		int strSize = my_strlen(argv[1]);
		printf("%d\n", strSize);
	}

	if (argc == 3){
		int str = my_strcmp(argv[1], argv[2]);
		printf("%d\n", str);
	}
	
	return 0;
}