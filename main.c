#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int second;
	printf("input the second : ");
	scanf("%i", &second);
	
	printf("The time for %i second is %i : %i : %i", second, second / 3600, second % 3600 / 60, second % 3600 % 60);	
	return 0;
}
