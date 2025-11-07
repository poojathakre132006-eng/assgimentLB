#include<stdio.h>
int RangSum(int iStart,int iEnd)
{
    int iSum=0;
    int iCnt=0;

    if(iStart<0||iEnd<0||iStart>iEnd)
    {
        return 0;
    }
    for(iCnt=iStart;iStart<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    iRet=RangSum(iValue1,iValue2);

    if(iRet==0 && (iValue1<0 ||iValue2<0||iValue1>iValue2))
    {
        printf("invalid range");
    }
    else{
     printf("addition is%d",iRet);
    }

    

    return 0;
}