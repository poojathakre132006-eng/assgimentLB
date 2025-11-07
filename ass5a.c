#include<stdio.h>
void CheckEvenOdd(int num)
{
    if(num%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}
int main()
{
    int number;
    printf("enter number");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;


}