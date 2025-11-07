#include<stdio.h>
int MultDigit(int iNo)
{
    int iDigit=0;
    int iMult=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iMult=iDigit*iMult;
        iNo=iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue=0;
    int bRet=0;

    printf("enter number");
    scanf("%d",&iValue);
    bRet=MultDigit(iValue);
    printf("%d",bRet);

    return 0;

}