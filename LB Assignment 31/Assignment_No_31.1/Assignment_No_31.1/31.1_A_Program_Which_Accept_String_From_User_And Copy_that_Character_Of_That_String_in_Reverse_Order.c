////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement 31.1 Write a program which accept string from user and copy that characters of that string into another string in reverse order.
///          Input : “Marvellous Python”
///         Output : “nohtyP suollevraM”
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

int StrLen(char* Str)
{
    int len = 0;
    for (len = 0; Str[len] != '\0'; len++);
    return len;
}

void StrCpyRev(char* Src, char* Dest)
{
    int len = 0;
    len = StrLen(Src);
    Src = Src + (len - 1);
    while (len > 0)
    {
        *Dest = *Src;
        Dest++;
        Src--;
        len--;
    }
    *Dest = '\0';
    return;
}

int main()
{
    char Arr[60] = "";
    char Brr[30] = "";

    printf("\n==========================================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]s", Arr);

    printf("\n==========================================================================\n");
    StrCpyRev(Arr, Brr);

    printf("\n==========================================================================\n");
    printf("\n Modify String is Reverse Order is = %s\n", Brr);

    printf("\n==========================================================================\n");
    printf("\n Thank You...!!!\n");
    printf("\n==========================================================================\n");
    _getch();
    return 0;
}