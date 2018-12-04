#include<stdio.h>

void mirror_triangle(int input)
{
    for(int num1=1;num1<=input;num1++)
    {

        for(int num2=input-num1;num2>0;num2--)
        {
            
            printf(" ");
        }
        
        for(int num3=0;num3<num1;num3++)
        {
            printf("*");
        }
        printf("\n");
    }
}



int main()
{
    int input;
    printf("enter number");
    scanf("%d",&input);
    mirror_triangle(input);
    return 0;
}
