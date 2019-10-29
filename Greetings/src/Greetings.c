/*
 ============================================================================
 Name        : Greetings.c
 Author      : Jerin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[50];
	char gt[50]="Greetings ";
	int x;
	int y;
	printf("Enter your name\n");
	scanf("%s",s);
	strcat(gt,s);
	x=strlen(s);
	y=x+16;
	for(int i=0;i<y;i++)   /* first line */
	{
		printf("*");
	}
		printf("\n");
		printf("*");       /* second line */
    for(int i=0;i<y-2;i++)
			{
				printf(" ");
			}
        printf("*\n");
		printf("*  ");
		printf("%s",gt);
		printf("  *\n");
		printf("*");       /* third line */
	for(int i=0;i<y-2;i++)
			{
					printf(" ");
			}
	    printf("*\n");
    for(int i=0;i<y;i++)   /* fourth line */
			{
				printf("*");
			}

	return 0;
}
