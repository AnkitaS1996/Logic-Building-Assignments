/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///    Statement 25.3 Accept Character from user and check whether it is digit or not (0-9).
///    Input : 7
///   Output : TRUE
///    Input : d
///   Output : FALSE
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= 48 && ch <= 57)   ///OR if(ch >= 0 && ch <= 9)
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n===========================================================\n");
    printf("\n Enter The Character : ");
    scanf("%c",&cValue);

    printf("\n===========================================================\n");
    bRet = ChkDigit(cValue);

    printf("\n===========================================================\n");
    if(bRet == TRUE)
    {
        printf("\n It is Digit.\n");
    }
    else
    {
        printf("\n It is Not a Digit.\n");
    }

    printf("\n===========================================================\n");
    printf("\n Thank You..!!!\n");
    printf("\n===========================================================\n");

    getch();
    return 0;
}
