////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Statements 30.3 Write a program which accept string from user and copy capital characters of that string into another string.
///        Input : “Marvellous Multi OS”
///       Output : “MMOS”
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpyCapX(char* Src, char* Dest)
{
    while (*Src != '\0')
    {
        if ((*Src >= 'A') && (*Src <= 'Z'))  ////OR /// (*Src >= 65)&&(*Src <= 92)
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    *Dest = '\0';
    return;
}

int main()
{
    char Arr[30] = "";
    char Brr[30] = "";   ///Empty String

    printf("\n====================================================================\n");
    printf("\n Enter String String => ");
    scanf("%[^'\n']s",&Arr);

    printf("\n====================================================================\n");
    StrCpyCapX(Arr, Brr);

    printf("\n====================================================================\n");
    printf("\n Implementation Of Copy Capital Character Of Given String is = %s\n", Brr);

    printf("\n====================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n====================================================================\n");

    _getch();
    return 0;
}