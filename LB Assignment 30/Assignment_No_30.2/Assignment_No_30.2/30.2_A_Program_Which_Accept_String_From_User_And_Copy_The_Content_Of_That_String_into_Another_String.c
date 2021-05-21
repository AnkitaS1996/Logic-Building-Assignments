///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 30.2 Write a program which accept string from user and copy the contents of that string into another string.(Implement strncpy() function)
///       Input : “Marvellous Multi OS”
///                10
///      Output : “Marvellous
///  Note : If third parameter is greater than the size of source string then
///         copy whole string into destination.
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void StrNCpyX(char* Src, char* Dest, int iCnt)
{
    while ((*Src != '\0') && (iCnt != 0))
    {
        *Dest = *Src;
        Src++;
        Dest++;
        iCnt--;
    }
    Dest = '\0';
    return;
}

int main()
{
    char Arr[30] = "";
    char Brr[30] = "";

    printf("\n====================================================================\n");
    printf("\n Enter A String : ");
    scanf("%[^'\n']s",Arr);

    printf("\n====================================================================\n");
    StrNCpyX(Arr, Brr, 10);

    printf("\n====================================================================\n");
    printf("\n Modified Copy Content Of That String is = %s.\n", Brr);

    printf("\n====================================================================\n");
    printf("\n %d\n", 10);

    printf("\n====================================================================\n");
    printf("\n Thank You..!!\n");

    printf("\n====================================================================\n");

    _getch();
    return 0;
}