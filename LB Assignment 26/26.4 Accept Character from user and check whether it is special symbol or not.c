////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 26.4 Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).c
///       Input : %
///      Output : TRUE
///       Input : d
///      Output : FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkSpecial_Char(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n=================================================================\n");
    printf("\n Enter The Character : ");
    scanf("%c",&cValue);

    printf("\n=================================================================\n");
    bRet = ChkSpecial_Char(cValue);

    printf("\n=================================================================\n");
    if(bRet == TRUE)
    {
        printf("\n It is Special Character.\n");
    }
    else
    {
        printf("\n It is not a Special Character.\n");
    }
    printf("\n=================================================================\n");

    printf("\n Thank You..!!!\n");
    printf("\n=================================================================\n");

    _getch();
    return 0;
}
