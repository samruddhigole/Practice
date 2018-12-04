#include<stdio.h>

void combinations(char buffer[3],int no1)
{
    char ch;
    for(int num1=0;num1<3;num1++)
    {
        ch=buffer[0];
        for(int num2=0;num2<3;num2++)
        {
            buffer[num2-1]=buffer[num2];
            buffer[num2]=ch;
        }
        printf ("\n");
        printf("%s",buffer);
        

    }
}


int main()
{
    int no1;
    printf("length of buffer");
    // scanf("%d",&no1);
    
    char buffer[] = "abc";
    printf("%s",buffer);

    // scanf("%[^\n]%*c",buffer);
     combinations(buffer,no1);
    return 0;
}