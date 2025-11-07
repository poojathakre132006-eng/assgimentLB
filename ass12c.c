#include<stdio.h>
int sum_of_factors(int number)
{
    int sum=0;
    for(int i=0;i<=number;i++)
    if(number%i==0)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int number;
    printf("enter number:");
    scanf("%d",&number);

    printf("%d\n",(number));
    
    return 0;
}