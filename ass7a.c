#include<stdio.h>
int pattern(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       if(iCnt%2==0)
       {
        printf("*");
       }
       else{
        printf("$");
       }
    }
}
int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    pattern(iValue);

    return 0;
}