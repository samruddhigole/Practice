#include<stdio.h>

void print_bottom_top(int input)
{
    for(int num1=input;num1>0;num1--)
    {
        for(int num2=0;num2<num1;num2++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}



int main()
{
    int input;
    printf("enter a number");
    scanf("%d",&input);
    print_bottom_top(input);
    return 0;
}
