#include<stdio.h>

int FindMax(int x, int y ,int z)
{
    if(x>y && x>z)
    {
        printf(" x is the large number");
    }
    else if(y>x  && y>z)
    {
        printf(" y is the large number");
    }
    else 
    {
        printf("z is the large");
    }
        
    
    
    
}
int main()
{
    int num1,num2,num3,result;
    printf("enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);

    result=FindMax(num1,num2,num3);
    printf("Maximum is:%d\n",result);

    return 0;
} 