#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0



BOOL ChkVowel(char cValue)
{


   if(cValue =='a'||cValue =='e'||cValue =='i'||cValue =='o'||cValue =='u'||)
    {
        return TRUE;
    }
    else
    {
       return FALSE;
    }
    
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("enter character\n");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it not is vowel");
    }

    return 0;
}