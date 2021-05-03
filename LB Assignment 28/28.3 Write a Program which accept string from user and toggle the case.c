////////////////////////////////////////////////////////////////////////////////////////////////////////
///   Statement 28.3 Write a Program which accept string from user and toggle the case.c
///             Input : "Marvellous Multi OS"
///            Output : mARVELLOUS mULTI os
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void StrtoggleX(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str >= 97 && *Str <= 122)  /// OR // if(*Str >= 'a' && *Str <= 'z')
        {
            *Str = *Str - 32;
        }
        else if(*Str >= 65 && *Str <= 90) /// OR // if(*Str >= 'A' && *Str <= 'Z')
        {
            *Str = *Str + 32;
        }
        *Str++;
    }
    return;
}

int main()
{
    char cArr[20];
    printf("\n=========================================================\n");
    printf("\n Enter A String : ");
    scanf("%[^\n]",&cArr);
    printf("\n=========================================================\n");

    StrtoggleX(cArr);
    printf("\n=========================================================\n");

    printf("\n The Given String Toggle Case is = %s.\n",cArr);
    printf("\n=========================================================\n");

    printf("\n Thank You..\n");
    printf("\n=========================================================\n");

    _getch();
    return 0;
}
