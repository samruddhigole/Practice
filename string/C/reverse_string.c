#include<stdio.h>

void reverse_string(char buffer[10])
{
    for(int num1=9;num1>=0;num1--)
    {
        printf("%c",buffer[num1]);
    }
}



int main()
{
    char str[20];
    scanf("%[^\n]%*c",str);
 //   printf("%s",str);
    reverse_string(str);
    return 0;
}
