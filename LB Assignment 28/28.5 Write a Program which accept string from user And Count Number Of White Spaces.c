///////////////////////////////////////////////////////////////////////////////////////////////////////////////
///   Statement 28.5 Write a Program which accept string from user And Count Number Of White Spaces.c
///             Input : "Marvellous"
///            Output : 0
///             Input : “MarvellouS Infosystems”
///            Output : 1
///             Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
///            Output : 5
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Count_White_Spaces(char *Str)
{
    int Cnt = 0;
    while(*Str != '\0')
    {
        if(*Str == 9 || *Str == 32)   //OR // TAB == 9 || SPACE == 32
        {
            Cnt++;
        }
        *Str++;
    }
    return Cnt;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("\n=========================================================\n");
    printf("\n Enter A String : ");
    scanf("%[^\n]",&cArr);
    printf("\n=========================================================\n");

    iRet = Count_White_Spaces(cArr);
    printf("\n=========================================================\n");

    printf("\n Given String Of Count White Spaces is = %d.\n",iRet);
    printf("\n=========================================================\n");

    printf("\n Thank You..\n");
    printf("\n=========================================================\n");

    _getch();
    return 0;
}
