/*
 ============================================================================
 Name        : averagearray.c
 Author      : jerin jose
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	float num[100],sum=0.0,average;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{

		printf("Enter the number\n");
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	average=sum/n;
	printf("Total=%f\n",sum);
	printf("Average=%f\n",average);
	return 0;
}
