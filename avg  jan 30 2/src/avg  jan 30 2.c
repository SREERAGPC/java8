/*
 ============================================================================
 Name        : avg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("enter 3 numbers");
	float a,b,c,d;
	scanf("%f%f%f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("avg %f",d);
	return 0;
}
