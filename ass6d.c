#include<stdio.h>

int Multiply(int a,int b,int c)
{
    int iMult=1;
    if(a!=0);
    {
        iMult=iMult*a;
    }
    if(b!=0);
    {
        iMult=iMult*b;
    }
    if(c!=0);
    {
        iMult=iMult*c;
    }

}
int main()
{
    int iValue1=0 ,iValue2=0 , iValue3=0 , iRet=0;
    printf("plaease enter three numbers:");
    sacnf("%d%d%d",&iValue1,&iValue2,&iValue3);
    iRet=Multiply(iValue1,iValue1,iValue3);
   

    return 0;
}