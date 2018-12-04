#include<stdio.h>


void patter_printing(int patternnum)
{
    int index=patternnum;
    while(index!=0)
    {
    for(int num1=patternnum;num1>0;num1--)
    {
        for(int num2=0;num2<index;num2++)
        {
            printf("%d",num1);
        }
    
    }
    printf("\n");
    index--;
    }
    
}





int main()
{
    int input;
    printf("enter a number");
    scanf("%d",&input);
    patter_printing(input);
   return 0;
}
