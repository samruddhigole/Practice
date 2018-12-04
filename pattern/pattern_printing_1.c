#include<stdio.h>

void pattern_tringle(int number)
{
    for(int num1=0;num1<=number;num1++)
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
    int pattern_number;
    printf("enter a number");
    scanf("%d",&pattern_number);
    pattern_tringle(pattern_number);
    return 0;
}
