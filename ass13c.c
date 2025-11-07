#include<stdio.h>
void print_numbers(int limit)
{
    int i;
    for(i=1;i<=limit;i++)
    {
        if((i%2)!=0)
        {
        printf("%d",i);
        }
    }
}
int mian()
{
    int limit;

    printf("enter number:");
    scanf("%d",&limit);
    print_numbers(limit);

    return 0;
}