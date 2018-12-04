#include<stdio.h>
#include<stdlib.h>
#define max 10

void rot2(int arr[],int len);

void rot1(int arr[],int rot,int len)
{
        for(int i=0;i<rot;i++)
	{
                rot2(arr,len);
	}
}


void rot2(int arr[],int len)
{
	int temp=arr[0],i;
	for(int i=0;i<len;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}

void display(int arr[],int len)
{
        int i;
        for(int i=0;i<len;i++)
                printf("%d",arr[i]);
}



int main()
{
	int arr[]={1,2,3,4,5,6,7};	
	rot1(arr,2,7);
	display(arr,7);
	return 0;	
}
