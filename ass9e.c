#include<stdio.h>

    int FactDiff(int iNo)
{
    int iCnt=0;
    int iEvenFact=1;
    int iOddFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%2)==0)
        {
           iEvenFact=iEvenFact*iCnt;
        }
        else{
            iOddFact=iOddFact*iCnt;
        }

    }
    
 return iEvenFact-iOddFact;
}
int main()
{
    int iValue=0,iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;


}