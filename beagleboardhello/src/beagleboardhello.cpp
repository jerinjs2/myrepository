//============================================================================
// Name        : beagleboardhello.cpp
// Author      : jerin jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[]={1,4,7,2,78,34,8,45,34,23,56,23,56,567,1324,567,13,60,37,34};
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
