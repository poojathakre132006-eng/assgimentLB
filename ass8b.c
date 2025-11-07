#include<stdio.h>

void Display(int iNo)
{
    if(iNo>=-9 && iNo<=9)
    {
        if(iNo<0)
        {
            printf("negative");
            iNo=-iNo;
        }

        switch(iNo)
        {
            case 0:
            printf("zero");
            break;

            case 1:
            printf("one");
            break;

            case 2:
            printf("Two");
            break;

            case 3:
            printf("Three");
            break;

            case 4:
            printf("Four");
            break;

            case 5:
            printf("Five");
            break;

            case 6:
            printf("Six");
            break;

            case 7:
            printf("Seven");
            break;

            case 8:
            printf("eghit");
            break;

            case 9:
            printf("nine");
            break;     

        }
   
    }
    else
    {
        printf("invalid number");
    }
}
int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}