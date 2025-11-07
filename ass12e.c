#include<stdio.h>
#include<stdbool.h>

int DivisibleByFive(int number)
{
    if(number%5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int mian(void)
{
    int number;

    printf("enter number");

    scanf("%d",&number);
    DivisibleByFive(number);
   

    return 0;
}