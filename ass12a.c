#include<stdio.h>
void printf_factors(int number)
{
    for(int i=1;i<=number;i++)
    if(number%i==0)
    {
        printf("%d",i);
    }
}
int mian()
{
    int number;

    printf("enter number");
    scanf("%d",number);
    printf_factors(number);

    return 0;

}