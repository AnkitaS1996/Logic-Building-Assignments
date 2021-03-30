////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement 25.2 Accept Character from user and check whether it is capital or not (A-Z).c
///     Input : F
///    Output : TRUE
///     Input : d
///    Output : FALSE
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
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

    bRet = ChkCapital(cValue);
     printf("\n===========================================================\n");
    if(bRet == TRUE)
    {
        printf("\n It is Capital Character\n");
    }
    else
    {
        printf("\n It is Not Capital Character.\n");
    }
    printf("\n===========================================================\n");
    printf("\n Thank You...!!!\n");
    printf("\n===========================================================\n");
    getch();
    return 0;
}
