#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        if((iNo%iCnt)!=0)
        {
           printf("%d\n",iCnt);
        }
        
    }
    

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number");
    scanf("%d",&iValue);

    iRet=NonFact(iValue);

    printf("%d",iRet);

    return 0;


}