/*
 ============================================================================
 Name        : EX4.c
 Author      : Mahmoud Tahoun
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	float x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);
	if (x>0){
		printf("\n%.2f is positive", x);
	}
	else if (0>x){
		printf("\n%.2f is negative", x);
	}
	else{
		printf("\nYou entered Zero");
	}
	return 0;
}
