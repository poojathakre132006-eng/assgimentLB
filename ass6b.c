#include<stdio.h>
#include<stdbool.h>

int chkGreater(int iNo)
{
   
    if(iNo>100)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("plaease enter number:");
    scanf("%d",&iValue);
    bRet=chkGreater(iValue);
    if(bRet)
    {
        printf("Greatest");
    }
    else{
        printf("Smallest");
    }

    return 0;
}