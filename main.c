#include "stdio.h"
#include "minic.h"
#include "my_strlen.c"
#include "my_strcmp.c"

int main(int argc, char const *argv[]){
	
	if (argc == 2){
		int strSize = my_strlen(argv[1]);
		printf("%d\n", strSize);
		return strSize;
	}

	if (argc == 3){
		int str = my_strcmp(argv[1], argv[2]);
		printf("%d\n", str);
		return str;
	}
	
	return 0;
}