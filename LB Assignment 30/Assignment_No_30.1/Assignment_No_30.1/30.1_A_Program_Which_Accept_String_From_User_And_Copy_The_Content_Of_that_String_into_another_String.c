////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 30.1 Write a program which accept string from user and copy the contents of that string into another string.
///                (Implement strcpy() function)
///      Input : “Marvellous Multi OS”
///     Output : “Marvellous Multi OS”
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void StrCpyX(char* Src, char* Dest)
{
    while (*Src != '\0')
    {
        *Dest = *Src;
        Src++;
        *Dest++;
    }
    Dest = '\0';
}

int main()
{
    char Arr[30] = "";
    char Brr[30] = "";   ///Empty String

    printf("\n====================================================================\n");
    printf("\n Enter String To Copy Content is Another String => ");
    scanf("%[^'\n']s",Arr);

    printf("\n====================================================================\n");
    StrCpyX(Arr, Brr);

    printf("\n====================================================================\n");
    printf("\n Implementation Of Copy String is = %s\n", Brr);

    printf("\n====================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n====================================================================\n");

    _getch();
    return 0;
}