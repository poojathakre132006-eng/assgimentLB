#include<stdio.h>
#include<stdlib.h>
 int Frequency(int Arr[],int iLength)
 {
    int iEvenCount=0;
    int iOddCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCount++;
        }
        else{
            iOddCount++;
        }
    }
    return iEvenCount-iOddCount;
 }
 int main()
 {
    int iSize=0,iRet=0,iCnt=0,iLength=0;
    int *p=NULL;

    printf("enter number of elements");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to alloacate memory");
        return -1;
    }
    printf("enter %d elements",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("enter element:%d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet=Frequency(p,iSize);
    printf("%d",iRet);
    free(p);
    return 0;

 }