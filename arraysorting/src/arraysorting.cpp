//============================================================================
// Name        : arraysorting.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[]={2,57,24,10,5,13,37,44,34,23,56,77,89,567,451,123,19,17,33,28};
printf("The elements in the array are as follows : \n");
for(int i=0;i<20;i++)
{
printf("%d\n",a[i]);
}
for(int i=0;i<19;i++)
for(int j=i;j<20;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("The sorted array is as follows : \n");
for(int i=0;i<20;i++)
printf("%d\n",a[i]);
return 0;
}
