#include<stdio.h>
#include<stdlib.h>
#define max 100

int print_array(int [],int);
int selection(int [],int);


int main()
{
	int len;
	printf("enter len of array");
	scanf("%d",&len);
	int arr[len];
	for(int no1=0;no1<len;no1++)
	{
		scanf("%d",&arr[no1]);
	}
	printf("array is: ");
	print_array(arr,len);
	selection(arr,len);
	printf("after sort array is: ");
	print_array(arr,len);
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


int selection(int arr[],int len)
{
	int min,p,m;
	for(int j=0;j<len;j++)
	{
		min=arr[j];
		for(int i=j+1;i<len;i++)
		{
			//min=arr[i];
			//printf("%d\n",min);
			if(min>arr[i])
			{
				min=arr[i];
				p=i;
			}
		}
		//swap(arr[p],arr[j]);
		m=arr[p];
		arr[p]=arr[j];
		arr[j]=m;
	}
	return 0;
}
		
