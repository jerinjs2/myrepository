#include<stdio.h>
#include<stdlib.h>

int count=0; //variable to count no. of elements in the list

//defining node structure
typedef struct nodeLinkedList
{
int data;
struct nodeLinkedList* next;
}node;

node* pointer=NULL;        //points to the last node
node* head=NULL;          //points to the head

//function to create a node. returns the address of the created node
node* nodeCreate(void)
{
node* t=(node*)malloc(sizeof(node));
count++;
return t;
}

//function to add data to the head
void dataAddHead(int data)
{
node* t=nodeCreate();
if(head==NULL)
{
head=t;
t->data=data;
t->next=NULL;
pointer=t;
return;
}
t->data=data;
t->next=head;
head=t;
return;
}

//function to add data to the back of the list
void dataAddTail(int data)
{
node* t=nodeCreate();
if(head == NULL){
head=t;
t->data=data;
t->next=NULL;
pointer=t;
return;
}
pointer->next=t;
t->data=data;
t->next=NULL;
pointer=t;
return;
}

//travels through the pointers and print the functions
void traverse(void)
{
node* t=head;
if(head == NULL)
{
printf("There are no elements\n");
return;
}
printf("These are the elements in this linked list : \n");
while(t->next!=NULL)
{
printf("%d\n",t->data);
t=t->next;
}
printf("%d\n",t->data);
return;
}

//inserts data after a specified data given in the list
void insertAfter(int data,int data1)
{
node* t=nodeCreate();
node* search=head;
if(head == NULL)
{
printf("List is empty...\n");
dataAddHead(data);
free(t);
return;
}
while(search->next != NULL)
{
if(search->data==data1)
{
t->next=search->next;
search->next=t;
t->data=data;
return;
}
search=search->next;
}
printf("No such data in between!!!!!\n");
return;
}

//inserts data before a data specified in the list
void insertBefore(int data,int data1)
{
node* t=nodeCreate();
node* search=head;
node* b4=NULL;
if(head == NULL)
{
printf("The list is empty!!!\n");
dataAddHead(data);
free(t);
return;
}
while(search->next!=NULL)
{
if(search->data==data1)
{
b4->next=t;
t->next=search;
t->data=data;
return;
}
b4=search;
search=search->next;
}
if(search->data == data1)
{
b4->next=t;
t->next=search;
t->data=data;
return;
}
else
{
printf("No such elements exist in this list!!!!\n");
return;
}
}

//function to delete an element specified by the users
void deleteElement(int data)
{
node* search=head;
node* b4=NULL;
node* t=NULL;
int c=0;
if(head==NULL)
{
printf("The list is already empty. Cant do anymore operation!!!\n");
return;
}
search=head;
b4=head;
if(count==1)
{
free(search);
head=NULL;
pointer=NULL;
count--;
return;
}
while(search->next!=NULL)
{
c++;
if(search->data==data)
{
if(c==1)
{
head=head->next;
free(search);
printf("Successfully Deleted!!!!\n");
count--;
return;
}
b4->next=search->next;
free(search);
printf("Successfully Deleted!!!!\n");
count--;
return;
}
b4=search;
search=search->next;
}
if(search->data==data)
{
b4->next=NULL;
pointer=b4;
free(search);
printf("Successfully Deleted!!!!\n");
count--;
return;
}
printf("No such element\n");
return;
}

int main()
{
int opt,data,data1;
while(1)
{
printf("There are currently %d number of elements in the list\n",count);
printf("What do you want to do? : 1) Add Head 2) Add Tail 3) Traverse 4) Insert After 5) Insert before 6) Delete 7) Print Head 8) Exit : ");
scanf("%d",&opt);
switch(opt)
{
case 1 : printf("Data : ");
	 scanf("%d",&data);
	 dataAddHead(data);
	 break;
case 2 : printf("Data : ");
	 scanf("%d",&data);
	 dataAddTail(data);
	 break;
case 3 : printf("Printing......\n");
	 traverse();
	 break;
case 4 : printf("Data to be inserted : ");
	 scanf("%d",&data);
	 printf("Data after which it should be added :  ");
	 scanf("%d",&data1);
	 insertAfter(data,data1);
	 break;
case 5 : printf("Data to be inserted : ");
	 scanf("%d",&data);
	 printf("Data before which it should be added : ");
	 scanf("%d",&data1);
	 insertBefore(data,data1);
	 break;
case 6 : printf("Data to be deleted : ");
	 scanf("%d",&data);
	 deleteElement(data);
	 break;
case 7 : if(head==NULL)
	 printf("There are no elements in this list so head is nil\n");
	 else
	 printf("The head element is %d and it points to %p\n",head->data,head->next);
	 break;
case 8 : exit(0);
	 break;
default : printf("Invalid Choice. Try Again !!!!!\n");
}
}
return 0;
}
