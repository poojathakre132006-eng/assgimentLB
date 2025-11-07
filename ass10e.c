#include<stdio.h>
double SquareMeter(int  iValue)
{
    return iValue*0.0929;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("enter area in squre feet");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("%d",dRet);

    return 0;
}