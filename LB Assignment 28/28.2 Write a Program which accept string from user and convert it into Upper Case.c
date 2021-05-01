////////////////////////////////////////////////////////////////////////////////////////////////////////
///   Statement 28.2 Write a Program which accept string from user and convert it into Upper Case.c
///             Input : "Marvellous Multi OS"
///            Output : MARVELLOUS MULTI OS
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void StrUpperX(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str >= 97 && *Str <= 122)  /// OR // if(*Str >= 'a' && *Str <= 'z')
        {
            *Str = *Str - 32;
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

    StrUpperX(cArr);
    printf("\n=========================================================\n");

    printf("\n The Given String Uppercase is = %s.\n",cArr);
    printf("\n=========================================================\n");

    printf("\n Thank You..\n");
    printf("\n=========================================================\n");

    _getch();
    return 0;
}

