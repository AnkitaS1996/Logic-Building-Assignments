///////////////////////////////////////////////////////////////////////////////////
/// Statement 32.1 Write a program which checks whether 15th bit is On or OFF.c
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    if (iNo & (1 >> 14))
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT iNum = 0;
    BOOL bRet = 0;

    printf("\n========================================================\n");
    printf("\n Enter a Number : ");
    scanf("%d", &iNum);

    bRet = ChkBit(iNum);
    printf("\n========================================================\n");

    (bRet == TRUE)?printf("\n 15th bit Of Given Number %d is ON\n", iNum):printf("\n 15th Bit Of Given Number is OFF\n", iNum);
    printf("\n========================================================\n");
    printf("\n Thank You..!!\n");
    printf("\n========================================================\n");
    _getch();
    return 0;
}