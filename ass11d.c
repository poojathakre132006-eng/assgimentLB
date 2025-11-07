#include<stdio.h>
int RangeSum(int iStart ,int iEnd)
{
    int iSum=0;
    int i=0;
    
        for ( i=iStart;i<=iEnd;i++)
        {
            if(i%2==0)
            {
                iSum=iSum+i;
            }
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

    iRet=RangeSum(iValue1,iValue2);

    if(iRet==0 && (iValue1>0 ||iValue2>0||iValue1<iValue2))
    {
        printf("invalid range");
    }
    else
    {
     printf("addition is%d",iRet);
    }

    return 0;

}