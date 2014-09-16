#include "stdio.h"
#include "minic.h"

int main(int argc, char const *argv[]){
	int j;
	
	j =	my_strlen("asdasdasdt");
	printf("%d\n", j);

	int k;
	k= my_strcmp("ab", "abc");
	printf("%d\n", k);
	return 0;
}