//============================================================================
// Name        : Gaussian.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<stdio.h>
#define MAX 100

void printMat(float a[MAX][MAX],int n)
{
printf("The Matrix is : \n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
printf("%f ",a[i][j]);
}
printf("\n\n\n");
}
}

int main()
{
int n;
float op[MAX];
float eq[MAX][MAX];
float fact;
printf("Enter the number of equations and variable : ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
for(int j=0;j<n+1;j++)
{
printf("Enter the eq[%d][%d] element : ",i,j);
scanf("%f",&eq[i][j]);
}
}
printf("This is the inputted matrix\n");
printMat(eq,n);
for(int i=1;i<n;i++)
{
int z=0;
for(int j=0;j<i;j++)
{
fact=eq[i][j]/eq[z][j];
for(int k=0;k<n+1;k++)
{
eq[i][k]=eq[i][k]-(fact*eq[z][k]);
}
z++;
}
}
printf("Value after Row Transformation : \n");
printMat(eq,n);
op[n-1]=eq[n-1][n]/eq[n-1][n-1];
//printf("Value of x%d : %f",n,op[n-1]);
for(int i=n-2;i>=0;i--)
{
float summation=0;
for(int j=n-1;j>i;j--)
summation=summation + (eq[i][j]*op[j]);
op[i]=(eq[i][n]-summation)/eq[i][i];
}
for(int i=0;i<n;i++)
printf("Value of x%d is %f\n",i+1,op[i]);
return 0;
}
