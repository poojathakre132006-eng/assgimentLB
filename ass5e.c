#include<stdio.h>

void CheckNumberType(int num)
{
    if(num>0)
    {
        printf("number is positive");
    }
    else if (num<0)
    {
        printf("number is  negative");
    }
    else 
    {
        printf("number is zero");
    }
}
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);
    CheckNumberType(number);

    return 0;

}