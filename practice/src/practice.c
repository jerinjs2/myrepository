/*
 ============================================================================
 Name        : practice.c
 Author      : jerin jose
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int count=0;
struct linkedlist
{
	int data;
	struct linkedlist* next;
};

typedef struct linkedlist node;
node* head=NULL;
node* nodeCreate(void)
{
	node* t=NULL;
	t=(node*) malloc (sizeof(node));
	t->next=NULL;
	if(count==0)
	head=t;
	count++;
	return t;
}
