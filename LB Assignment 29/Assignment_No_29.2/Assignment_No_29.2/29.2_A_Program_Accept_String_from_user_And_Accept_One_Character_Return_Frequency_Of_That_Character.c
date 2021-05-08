/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     Statements 29.2 Write a program which accept string from user and accept one character Return Frequency Of That Character.c
///      Input : “Marvellous Multi OS”
///            :   M
///     Output : 2
///      Input : “Marvellous Multi OS”
///            :   W
///     Output : 0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Count_Char(char* Str, char ch)
{
    int Cnt = 0;
    while (*Str != '\0')
    {
        if (ch == *Str)
        {
            Cnt++;
        }
        *Str++;
    }
    return Cnt;
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
    iRet = Count_Char(cArr, cValue);

    printf("\n============================================\n");

    printf("\n Given character Of Frequency is = %d.\n", iRet);
    printf("\n============================================\n");

    printf("\n Thank You....!!!\n");
    printf("\n============================================\n");

    _getch();
    return 0;
}