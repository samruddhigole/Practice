#include<stdio.h>
#include<stdlib.h>

int insertion(int [],int);
int print_array(int [],int);
int main()
{
	int n;
	printf("give len of array");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print_array(arr,n);
	insertion(arr,n);
	print_array(arr,n);
	return 0;
		
}

int print_array(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


int insertion(int arr[],int len)
{
	for(int i=1;i<len;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	return 0;
}
