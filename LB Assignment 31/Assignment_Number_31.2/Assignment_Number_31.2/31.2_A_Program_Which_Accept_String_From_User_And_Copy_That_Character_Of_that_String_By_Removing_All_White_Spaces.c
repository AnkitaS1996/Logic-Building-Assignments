//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 31.2 Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.
///         Input : “Marvel lous Pyth on”
///        Output : “MarvellousPython”
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

void Str_Cpy_WhiteSpaceX(char* Src, char* Dest)
{
    while (*Src != '\0')
    {
        if (*Src != 32)
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
    char Brr[30] = "";

    printf("\n==========================================================================\n");
    printf("\n Enter A String : ");
    scanf("%[^\n]s", Arr);

    printf("\n==========================================================================\n");
    Str_Cpy_WhiteSpaceX(Arr, Brr);

    printf("\n==========================================================================\n");
    printf("\n Modify The string Removing All White Spaces is = %s.\n", Brr);

    printf("\n==========================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n==========================================================================\n");
    _getch();
    return 0;
}