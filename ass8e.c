#include<stdio.h>
void TableRev(int iNo)
{
    int i=0;
    int iAns=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=10;i>=1;i--)
    {
        iAns=iNo*i;
        printf("%d\t",iAns);
    }
}
int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}