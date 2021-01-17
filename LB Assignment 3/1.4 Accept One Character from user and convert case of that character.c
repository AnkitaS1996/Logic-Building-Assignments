#include"Header.h"
void DisplayConvert(ALPHA cValue)
{
    if(cValue >=  'A' && cValue  <=  'Z')
    {
        cValue = cValue + 32;
        printf(" \n Lower Case Character is %c",cValue);
    }
    else if( cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf(" \n Upper Case Character is %c",cValue);
    }
    return;
}
BOOL main()
{
    ALPHA cValue = '\0';
    printf("\n Enter a character to Convert case of that charater : ");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    getch();
    return 0;
}
