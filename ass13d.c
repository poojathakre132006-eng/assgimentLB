#include<stdio.h>
int sum_natural_numbers(int limit)
{
    int sum=0;
    for(int i=1;i<=limit;i++);
    {
    sum+=1;
    }
    return sum;
}
int main(void)
{
    int limit;
    printf("enter number");

    scanf("%d",&limit);
    printf("%d\n",sum_natural_number(limit));
    
    return 0;
}