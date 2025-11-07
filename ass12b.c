#include<stdio.h>
int count_factor(int number)
{
    int iCnt=0;
    for(iCnt=0;iCnt<=number;iCnt++)
    if(number%iCnt==0)
    {
        printf("%d",iCnt);
    }
}
int mian()
{
    int number;

    printf("enter number:");
    scanf("%d",&number);

    count_factor(number);

    return 0;

}