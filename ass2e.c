#include<stdio.h>
#include<stdbool.h>

void ChkEvenOdd(int iNo)
{
    int iRem=0;
   
    
    if((iRem%2)==0)
    {
        printf("number is even");
    }
    else
    {
      printf("number is  odd");
    }
}
int main()
{
    int iValue=0;
    bool iRet=false;

    printf("enter number");
    scanf("%d",&iValue);

    ChkEvenOdd(iRet);

    return 0;
}