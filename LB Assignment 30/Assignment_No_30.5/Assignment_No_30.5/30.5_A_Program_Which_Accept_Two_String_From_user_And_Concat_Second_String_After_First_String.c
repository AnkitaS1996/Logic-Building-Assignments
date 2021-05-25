//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///   Statements 30.5 Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function).
///           Input : “Marvellous Infosystems”
///                   “Logic Building”
///          Output : “Marvellous Infosystems Logic Building”
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void StrConcatX(char* Src, char* Dest)
{
    while (*Src != '\0')   ///Traverse Frist String Till End
    {
        Src++;
    }
    *Src = ' ';
    Src++;
    while (*Dest != '\0')   /// Copy Content Of Destination in Source
    {
        *Src = *Dest;
        Dest++;
        Src++;
    }
    *Src = '\0';
    return;
}

int main()
{
    char Arr[60] = "\0";//"Marvellous Infosystems";  //"";
    char Brr[30] = "\0";//" Logic Building";   // ""; //Empty String

    printf("\n====================================================================\n");
    printf("\n Enter First String => ");
    scanf("%[^\n]s",Arr);
    fflush(stdin);

    printf("\n====================================================================\n");
    printf("\n Enter Second string : ");
    scanf(" %[^\n]s",Brr);
    //scanf(" %s",&Brr);
    //gets(Brr);

    printf("\n====================================================================\n");
    StrConcatX(Arr, Brr);

    printf("\n====================================================================\n");
    printf("\n Implementation Of Given Concat String is = %s\n", Arr);

    printf("\n====================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n====================================================================\n");

    _getch();
    return 0;
}