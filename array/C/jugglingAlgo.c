#include<stdio.h>
#define max 10



int jugg(int arr[],int d,int len)
{
	int no2;
	for(int no1=0;no1<d;no1++)
	{
		int temp=arr[no1];
		printf("%dtemp \n",temp);
		for( no2=0;no2<len;no2++)
		{
			printf("%d$$ ",arr[no2+2]);
			arr[no2]=arr[no2+2];
		}
		arr[no2]=temp;
		//printf("%d@ ",arr[no2]);
	}
}


void display(int arr[],int len)
{
	for(int no3=0;no3<len;no3++)
	{
		printf("%d ",arr[no3]);
	}
}



int main()
{
	
	int arr[]={1,2,3,4,5,6,7,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	jugg(arr,2,len);
	printf("%dlen ",len);
	display(arr,len);
	return 0;
}


