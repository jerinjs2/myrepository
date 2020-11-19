#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned short int bool_t;

void sort(unsigned int* arr,unsigned short int s)
{
for(unsigned short int i=0;i<(s-1);i++)
{
for(unsigned short int j=i+1;j<s;j++)
{
if(arr[i]>arr[j])
{
arr[i]=arr[i]+arr[j];
arr[j]=arr[i]-arr[j];
arr[i]=arr[i]-arr[j];
}
}
}
return;
}

bool_t bsFunc(unsigned int* arr,unsigned short int s,unsigned int searchEle)
{
unsigned short int min=0;
unsigned short int max=s-1;
unsigned short int mid;
while((max-min)!=1)
{
mid=(max-min)/2;
if(arr[min+mid]>searchEle)
{
max=min+mid;
if(arr[max]==searchEle || arr[min]==searchEle)
return TRUE;
}
else if(arr[min+mid]<searchEle)
{
min=min+mid;
if(arr[max]==searchEle || arr[min]==searchEle)
return TRUE;
}
else
return TRUE;
}
return FALSE;
}

int main()
{
unsigned int arr[]={41,25,45,12,18,47,18,25,13,258,18,5};
unsigned short int s=sizeof(arr)/sizeof(int);
unsigned int search;
sort(arr,s);
printf("Enter the number you want to search : ");
scanf("%d",&search);
if(bsFunc(arr,s,search))
printf("The element is present in the array\n");
else
printf("The element is not present in the array\n");
return 0;
}
