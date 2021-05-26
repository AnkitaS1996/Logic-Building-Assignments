////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 31.3 Write a program which accept string from user and copy that characters of that string into another string by converting all small
///                 characters into capital case.
///        Input : “Marvellous Python 2”
///       Output : “MARVELLOUS PYTHON 2”
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

void Str_Cpy_Capital(char* Src, char* Dest)
{
    while (*Src != '\0')
    {
        *Dest = *Src;
        if (*Dest >= 97 && *Dest <= 122)  /// OR // if(*Dest >= 'a' && *Dest <= 'z')
        {
            *Dest = *Dest - 32;
        }
        Dest++;
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
    Str_Cpy_Capital(Arr, Brr);

    printf("\n==========================================================================\n");
    printf("\n Modify The String in Capital Letter = %s.\n", Brr);

    printf("\n==========================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n==========================================================================\n");
    _getch();
    return 0;
}