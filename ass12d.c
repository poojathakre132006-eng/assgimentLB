#include<stdio.h>
int sum_of_even_factors(int number)
{
    int sum=0;
    for(int i=0;i<=number;i++)
    if(number%2==0)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int number;

    printf("enter number");
    scanf("%d",&number);

    printf("%d\n",sum_of_even_factors(number));

    return 0;
}