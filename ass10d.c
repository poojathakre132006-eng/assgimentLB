#include<stdio.h>
double FhtoCs(float fTemp)
{
    double dCelsisus=0.0;
    dCelsisus =(fTemp-32)*((double)5/(double)9);
    return dCelsisus;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("enter temperature in fahrenheit");
    scanf("%d",&fValue);

    dRet=FhtoCs(fValue);

    printf("%d",dRet);

    return 0;
}