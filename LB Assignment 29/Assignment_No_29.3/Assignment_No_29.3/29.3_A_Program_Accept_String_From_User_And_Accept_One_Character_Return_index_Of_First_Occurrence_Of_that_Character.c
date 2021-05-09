////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 29.3 Write a program which accept string from user and accept one character Return index of first occurrence of that character.
///    Input : “Marvellous Multi OS”
///          :   M
///   Output : 0
///    Input : “Marvellous Multi OS”
///          :   W
///   Output : -1
///    Input : “Marvellous Multi OS”
///          :   e
///   Output : 4
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

int First_Char(char *Str, char ch)
{
    int iCnt = 0;
    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            return iCnt;
        }
        *Str++;
        iCnt++;
    }
}

int main()
{
    char cArr[20] = "";
    char cValue = '\0';
    int iRet = 0;

    printf("\n============================================\n");
    printf("\n Enter String : ");
    scanf("%[^'\n']s",cArr);

    printf("\n============================================\n");
    printf("\n Enter the Character : ");
    //scanf("%c",&cValue);
    cValue = _getche();
    printf("\n");

    printf("\n============================================\n");
    iRet = First_Char(cArr, cValue);

    printf("\n============================================\n");

    printf("\n Given character Index Of First Occurrence is = %d.\n", iRet);
    printf("\n============================================\n");

    printf("\n Thank You....!!!\n");
    printf("\n============================================\n");

    _getch();
    return 0;
}