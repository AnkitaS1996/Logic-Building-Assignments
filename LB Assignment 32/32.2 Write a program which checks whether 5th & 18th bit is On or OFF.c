///////////////////////////////////////////////////////////////////////////////////////////
///   Statement 32.2 Write a program which checks whether 5th & 18th bit is On or OFF.
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    if(1&(iNo>>4) && 1&(iNo>>17))
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    UINT iNum = 0;
    BOOL iRet = 0;

    printf("\n========================================================\n");
    printf("\n Enter A Number : ");
    scanf("%d",&iNum);

    iRet = ChkBit(iNum);
    printf("\n========================================================\n");

    (iRet == TRUE)? printf("\n 5th And 18th Bit is ON.\n") : printf("\n 5th And 18th Bit is OFF.\n");
    printf("\n========================================================\n");

    printf("\n Thank You....!!!\n");
    printf("\n========================================================\n");

    _getch();
    return 0;
}
