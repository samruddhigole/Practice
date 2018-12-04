#include<stdio.h>
#define max 10

int extraArray(int arr[],int pos,int len)
{
	int arr2[pos],i,k;
	for(int no1=0;no1<pos;no1++)
	{
		arr2[no1]=arr[no1];
	}

	int d=pos;
	printf("%dl ",len);	
	for( int no2=0;no2<len;no2++)
	{
		
		arr[no2]=arr[d];
		d++;
	}
	
	for(int no3=len-pos,no4=0;no3<len,no4<pos;no3++,no4++)
	{
		arr[no3]=arr2[no4];
	}

	printf("%dpos ",pos);



	for(int no5=0;no5<pos;no5++)
	{
		printf("%d ",arr2[no5]);
	}

	printf("\n");	
	for(int j=0;j<len;j++)
		printf("%d ",arr[j]);
	
	return 0;
		
}




int main()
{
	int arr[max]={1,2,3,4,5,6,7};
	int len=(sizeof(arr))/(sizeof(arr[0]));
	extraArray(arr,2,len-3);
}



