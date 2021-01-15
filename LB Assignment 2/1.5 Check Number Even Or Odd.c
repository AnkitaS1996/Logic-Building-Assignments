#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE  1
#define FALSE 0
 BOOL chkEVEN(int iNo)
 {
     if(iNo%2 == 0)
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
    int iValue = 0,bRet = 0;
    printf("\n Enter a Number ==> ");
    scanf("%d",&iValue);
    bRet = chkEVEN(iValue);
    if(bRet == 1)
    {
       printf("\n Given Number %d is Even",iValue);
       //printf("\n Even %d",iValue);
    }
    else
    {
        printf("\n Given Number %d is Odd",iValue);
        //printf("\n Odd %d",iValue);
    }

    return 0;

}

