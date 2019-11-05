/*
 ============================================================================
 Name        : stacks.c
 Author      : jerin jose
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

#define QSIZE 10
#define FALSE 0U
#define TRUE 1U

typedef struct queue
{
    unsigned int q[QSIZE];
    //SIGNED INT FIRST;
    signed int last;
}mainqueue;

mainqueue jK;

//jK.first=-1;
//jK.last=-1;

int emptyCheckQ(void)
{
    if(jK.last== -1)
        return TRUE;
    else
        return FALSE;
}
void enqueue (int nq)
{
    jK.q[++jK.last]=nq;
}

int dequeue(void)
{
    int n=0;
    int deqEle;
    if(!emptyCheckQ())
    {
        deqEle=jK.q[0];
        for (int i=0;i<(jK.last);i++)
        {
            jK.q[n]=jK.q[n+1];
            n++;
        }

        return deqEle;

        }
    else
    {
        printf("the queue is empty so no more dequeuing \n");
        exit(2);

    }
}
int main ()
{
    int iparray[]={6,8,4,3,9,6};
    int deqEle;
    jK.last=1;
    for (int i=0;i<6;i++)
    {
        enqueue(iparray[i]);
    }
    printf("the queue elements after pushing away is :\n");
    for (int i=0;i<=jK.last;i++)
    printf("%d\t",jK.q[i]);
    printf("\n");
    enqueue(4);
    printf("the queue after pushing just an element is : \n");
    for (int i=0; i<=jK.last;i++ )
        printf("%d\t", jK.q[i]);
    printf("\n");
    deqEle=dequeue();
    printf("dequeued element is : %d\n",deqEle);
    deqEle=dequeue();
    printf("dequeued element is : %d\n",deqEle);
    printf("dequeued element after dequeing twice is :\n");
    for (int i=0;i<=jK.last;i++)
        printf("%d\t", jK.q[i]);
    printf("\n");
    return 0;

}
