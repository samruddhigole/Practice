#include<stdio.h>
#include<stdlib.h>

int swap(int,int);
int bubble_sort(int [],int);
int print_array(int [],int);

int main()
{
	int n;
	printf("how many elements in array");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	print_array(arr,n);
	bubble_sort(arr,n);
	print_array(arr,n);

}

int print_array(int arr[],int len)
{
	for(int no1=0;no1<len;no1++)
	{
		printf("%d ",arr[no1]);
	}
	printf("\n");
	return 0;
}


int swap(int no1,int no2)
{
	int no3=no1;
	no1=no2;
	no2=no3;
	return 0;
}

int bubble_sort(int arr[],int len)
{
	int min,extra;
	for(int no1=0;no1<len-1;no1++)
	{
		for(int no2=0;no2<len-1;no2++)
		{
			min = arr[no2];
			if(min>arr[no2+1])
			{
				printf("%d%d!!\n",arr[no2],arr[no2+1]);
				//swap(min,arr[no2+1]);
				extra=arr[no2];
				arr[no2]=arr[no2+1];
				arr[no2+1]=extra;
			}
		}
	}
	return 0;
}











