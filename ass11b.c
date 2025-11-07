#include<stdio.h>
void RangeDisplay(int iStart,int iEnd)
{
   if(iStart>iEnd)
   {
    printf("invalid range");
   }
   while(iStart<=iEnd)
   
   if((iStart%2)==0)
   {
   {
     printf("%d\t",iStart);
   }
   }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("enter starting point");
    scanf("%d",&iValue1);

    printf("enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;


}