#include<stdio.h>

int main()
{
unsigned int a[]={24,45,55,14,25,34,87,69,47};
unsigned int b,c;
unsigned short int i;
printf("Enter the number you want to search in the array : ");
scanf("%d",&b);
c=sizeof(a)/sizeof(int);
for(i=0;i<c;i++)
{
if(a[i]==b)
{
printf("The number is present in the array\n");
break;
}
}
if(i==c)
printf("The number is not present in the array\n");
}
