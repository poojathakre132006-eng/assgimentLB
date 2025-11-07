#include<stdio.h>
int KMtoMter(int iNo)
{
    return iNo*1000 ;
}
int main()
{
    int iValue=0,iRet=0;

    printf("enter distance");
    scanf("%d",&iValue);

    iRet=KMtoMter(iValue);

    printf("%d",iRet);

    return 0;
}