#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int seconds;
	
	printf("input the second : ");
	scanf("%i", &seconds);
	
	printf("the time is %i : %i", seconds / 60, seconds % 60);
	return 0;
}
