#include<stdio.h>
#include<conio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkGreater(int No)
{
    if(No > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
BOOL main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Please Enter Number : ");
    scanf("%d",&iValue);

    bRet = chkGreater(iValue);

    if(bRet == TRUE)
    {
        printf("\n Given Number is Greater");
    }
    else
    {
        printf("\n Given Number is Small");
    }
    printf("\n \n Thank You....!!!!! ");
    getch();
    return 0;
}
