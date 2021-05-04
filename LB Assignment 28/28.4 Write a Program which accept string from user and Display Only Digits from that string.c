///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///   Statement 28.4 Write a Program which accept string from user and Display Only Digits from that string.c
///             Input : "Marve89llous121"
///            Output : 89121
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Display_Digit(char *Str)
{
    printf("\n");
    while(*Str != '\0')
    {
        if(*Str >= '0' && *Str <= '9')
        {
            printf("%c",*Str);
        }
        *Str++;
    }
    printf("\n");
    return;
}

int main()
{
    char cArr[20];
    printf("\n=========================================================\n");
    printf("\n Enter A String : ");
    scanf("%[^\n]",&cArr);
    printf("\n=========================================================\n");

    Display_Digit(cArr);
    printf("\n=========================================================\n");

    printf("\n Thank You..\n");
    printf("\n=========================================================\n");

    _getch();
    return 0;
}
