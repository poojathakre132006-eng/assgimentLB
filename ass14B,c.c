#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo)
{
    int iDigit=0;
    bool bFlag=false;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            bFlag=true;
            break;
        }
        iNo=iNo/10;
    }
    return bFlag;

}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("enter number");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==true)
    {
        printf("it contains zero");
    }
    else{
        printf("there is no zero contain");
    }
    return 0;
}