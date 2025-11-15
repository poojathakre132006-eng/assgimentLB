#include<stdio.h>
#include<stdlib.h>


typedef int*IPTR;


int Frequency(int Arr[],int iLength)
{
  int iCnt=0, iCount=0;

  for(iCnt=0;iCnt<=iLength;iCnt++)
  {
   if(Arr[iCnt]==11)
   {
      iCount++; 
   }
  
  }
 return iCount++;
}

  int main()
{
    int iSize=0,iCnt=0,iRet=0;
    
    IPTR iPtr=NULL;

    printf("enter the numbere of elements:");
    scanf("%d",&iSize);
    
    
    iPtr=(IPTR)malloc(iSize*sizeof(int));

    if(NULL==iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("enter the values:\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("enter elements %d:",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }
   
    iRet=Frequency(iPtr,iSize);
   free(iPtr);
    return 0;
}