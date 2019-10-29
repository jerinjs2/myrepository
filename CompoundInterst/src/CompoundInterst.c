/*
 ============================================================================
 Name        : CompoundInterst.c
 Author      : Jerin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float re;
	float r;
	int t=0;
	int N;
	float principle;
	printf("Enter the interest rate \n");
		scanf("%f",&re);
	r=(re/100);
	printf("Enter the interest amount \n");
			scanf("%f",&principle);
	printf("Enter the year\n");
	scanf("%d",&N);
	for(t=1;t<(N+1);t++)
	{
		principle=principle+principle*r;
	}
	printf("%f",principle);
return 0;
}
