///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 29.1 Write a program which accept string from user and accept one character.Check whether that character is present in string or not.
///      Input : “Marvellous Multi OS”
///            :   e
///     Output : TRUE
///      Input : “Marvellous Multi OS”
///            :   W
///     Output : FALSE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Chkchar(char *Str, char ch)
{
    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            return TRUE;
        }
        *Str++;
    }
    return FALSE;
}

int main()
{
    char cArr[20] = "";
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n============================================\n");
    printf("\n Enter String : ");
    scanf("%[^'\n']s",cArr);

    printf("\n============================================\n");
    printf("\n Enter the Character : ");
    //scanf("%c",&cValue);
    cValue = _getche();
    printf("\n");
    printf("\n============================================\n");

    bRet = Chkchar(cArr, cValue);
    printf("\n============================================\n");

    (bRet == TRUE) ? printf("\n Given character %c is Found.\n", cValue) : printf("\n Given Character %c is Not Found.\n", cValue);
    printf("\n============================================\n");

    printf("\n Thank You....!!!\n");
    printf("\n============================================\n");

    _getch();
    return 0;
}