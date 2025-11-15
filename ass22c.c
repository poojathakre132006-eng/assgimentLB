#include<stdio.h>
#include<stdlib.h>


typedef int*IPTR;

int FrequencyCalculate(int Arr[],int iSize)
{
  int iCnt=0, iCount=0;

  for(iCnt=0;iCnt<=iSize;iCnt++)
  {
   if(Arr[iCnt]==11)
   {
    iCount++;
   }
  }
return iCount;
  
}


int main()
{
    int iLength=0,iCnt=0,iRet=0;
    IPTR iPtr=NULL;

    printf("enter the numbere of elements:");
    scanf("%d",&iLength);
    
    //step 1:Allocate the memory
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("enter the values:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        sacnf("%d",&iPtr[iCnt]);
    }

    //step 2:use the memory
    iRet=FrequencyCalculate(iPtr,iLength);
    printf("Frequecy of 11 is :%d\n",iRet);

    //step 3:free the memory
    free(iPtr);
    return 0;
}