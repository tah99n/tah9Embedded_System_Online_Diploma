/*
 * EX4.c
 *
 *  Created on: 20 Apr 2023
 *      Author: Mahmoud Tahoun
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	float a,b;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f",&a,&b);
	printf("\nProducut: %f",(a*b));
	return EXIT_SUCCESS;
}
