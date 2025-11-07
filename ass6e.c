#include<stdio.h>
float percentage(int iNo1,int iNo2)
{
  float fAns=0.0;
  if(iNo1==0)
  {
    return 0.0;
  }
  fAns=((float)iNo2 / (float)iNo1)*100;
  return fAns;

}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("please enter total marks");
    scanf("%d",&iValue1);
    printf("please enter obtained marks");
    scanf("%d",&iValue2);
    fRet=percentage(iValue1,iValue2);
    printf("precentage is:%d",fRet);

    return 0;
}

