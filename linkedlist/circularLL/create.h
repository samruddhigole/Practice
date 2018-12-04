#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
	struct node *next;
	int data;
}Node;


Node *create(int val)
{
	Node *nn;
	nn=(Node *)malloc(sizeof(Node));
	nn->next=nn;
	nn->data=val;
	return nn;
}
