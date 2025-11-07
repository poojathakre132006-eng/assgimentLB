#include<stdio.h>

int FindMax(int a, int b)
{
    if(a>b)
    {
        printf(" a is the large number");
    }
    else if(b<a)
    {
        printf(" b is the large number");
    }
}
int main()
{
    int num1,num2,result;
    printf("enter two numbers:");
    scanf("%d%d",&num1,&num2);

    result=FindMax(num1,num2);
    printf("Maximum is:%d\n",result);

    return 0;
}