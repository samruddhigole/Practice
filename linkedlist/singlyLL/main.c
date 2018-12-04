#include<stdio.h>
#include<stdbool.h>
#include"insertion.h"
#include"deletion.h"
#include"searchElement.h"
#include"NthFromFirst.h"
#include"NthFromLast_1stSoln.h"
#include"NthFromLast_2stSoln.h"
#include"middle.h"
#include"middle_2ndSoln.h"
#include"getCountOfKey.h"
#include"length_of_loop.h"
#include"length.h"
#include"detect_loop.h"
#include"starting_point_of_loop.h"
#include"Sort_sll.h"
#include"check_sll_even_odd.h"
#include"merge_sorted_sll.h"
int main()
{
        Node *head=NULL;
        //head=create(100);
        //display(head);
       
//Insert Function
		head=insert_first(head,1200);
        head=insert_first(head,900);
        head=insert_first(head,700);
        head=insert_first(head,600);
        head=insert_first(head,400);
        head=insert_first(head,200);
        head=insert_first(head,100);
        display(head);

    //     head=insert_last(head,500);
    //     display(head);
	// head=insert_at_pos(head,2,4);
	// display(head);

		Node *head2=NULL;
		
        head2=insert_first(head2,1000);
        head2=insert_first(head2,750);
        head2=insert_first(head2,500);
        head2=insert_first(head2,150);
        head2=insert_first(head2,50);
		display(head2);

	//head->next->next->next->next->next=head;

//Delete Function
/*
	head=del_first(head);
	display(head);
	head=del_last(head);
	display(head);
	head=del_at_position(head,3);
	display(head);
*/
//for searchElement ==========
	/*int n;
	bool res;
	printf("enter ele which u want to search");
	scanf("%d",&n);
	res=search(head,n);
	if(res)
		printf("true\n");
	else
		printf("false\n");*/
//=========
  
//get Nth node from first
      /*  int N;
	printf("which position from first you want:");
	scanf("%d",&N);
	printf("%dth node from first is %d\n",N,Nth_Node(head,N));

//get Nth node from last
	int M;
	printf("which position from last you want:");
	scanf("%d",&M);
	printf("%dth node of linkedlist from last is %d\n",M,Nth_node_last(head,M));
	
//print middle of linkedlist
	printf("middle of linked list is %d\n",middle(head));
	

//count of a key	
	printf("enter keywhich you want to count");
	scanf("%d",&N);
	printf("the key %d occures %d times\n",N,count_of_N(head,N));*/

//detect Loop
	// detect_loop(head);

//Length of Loop
	// int count=detect_loop1(head);
	// printf("length of loop present in linked list is %d\n",count);
	// printf("starting point of loop is %d",starting_point(head));

//Sorting 
	// head=sort_sll(head);
	// display(head);
	// head=middle_of_sll(head);
	// printf("middle of linked list by using two pointers is %d\n",head->data);
	// check_even_odd(head);
     head=mergeSortedSll(head,head2);
	 display(head);
	return 0;
}



