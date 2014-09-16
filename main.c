#include "stdio.h"
#include "minic.h"

int main(int argc, char const *argv[]){
	// Testing my_strlen
	int j;
	j =	my_strlen("asdasdasdt");
	printf("%d\n", j);

	// Testing my_strcmp
	int k;
	k = my_strcmp("ab", "abc");
	printf("%d\n", k);
	
	return 0;
}