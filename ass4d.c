#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0;
    int iFactSum=0;
    int iNotFactSum=0;

    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
           iFactSum=iFactSum+iCnt;
        }
        else{
            iNotFactSum=iNotFactSum+iCnt;
        }

    }
    
 return iFactSum-iNotFactSum;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;


}