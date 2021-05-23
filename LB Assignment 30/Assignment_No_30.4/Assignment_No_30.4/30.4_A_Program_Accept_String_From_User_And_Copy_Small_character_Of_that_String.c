//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///    Statement 30.4 Write a program which accept string from user and copy small characters of that string into another string.
///            Input : “Marvellous multi OS”
///           Output : “arvellous multi”
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>

void StrCpySmallX(char* Src, char* Dest)
{
    while (*Src != '\0')
    {
        if ((*Src >= 97) && (*Src <= 122) || (*Src == 32))  //OR // ((*Src >= 'a') && (*Src <= 'z') || (*Src == ' '))
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }
    Dest = '\0';
    return;
}

int main()
{
    char Arr[30] = "";
    char Brr[30] = "";   ///Empty String

    printf("\n====================================================================\n");
    printf("\n Enter A String => ");
    scanf("%[^'\n']s",Arr);

    printf("\n====================================================================\n");
    StrCpySmallX(Arr, Brr);

    printf("\n====================================================================\n");
    printf("\n Implementation Of Copy Small Character Of Given String is = %s\n", Brr);

    printf("\n====================================================================\n");
    printf("\n Thank You...!!!\n");

    printf("\n====================================================================\n");

    _getch();
    return 0;
}