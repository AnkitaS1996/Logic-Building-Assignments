//////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 29.5 29.5 . Write a program which accept string from user reverse that string in place.c
///      Input : "abcd"
///     Output : “dcba”
///      Input : “abba”
///     Output : “abba”
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrRevX(char* Source)
{
    int i = 0;

    char* Ptr1 = NULL;
    char* Ptr2 = NULL;

    while (Source[i] != '\0')
    {
        if (Source[i] == ' ')
        {
            i++;
            continue;
        }

        Ptr1 = Source + i;

        while (Source[i] != ' ' && Source[i] != '\0')
        {
            i++;
        }

        Ptr2 = Source + i - 1;

        while (Ptr1 < Ptr2)
        {
            char ch = *Ptr1;
            *Ptr1 = *Ptr2;
            *Ptr2 = ch;
            Ptr1++;
            Ptr2--;
        }
    }
    return;
}

int main()
{
    char Arr[20];

    printf("\n==========================================\n");
    printf("\n Enter A String : ");
    scanf("%[^'\n']s",Arr);

    printf("\n==========================================\n");
    StrRevX(Arr);

    printf("\n==========================================\n");
    printf("\n Modified Reverse String is => %s\n", Arr);

    printf("\n==========================================\n");
    printf("\n Thank You..!!!\n");
    printf("\n==========================================\n");

    _getch();
    return 0;
}