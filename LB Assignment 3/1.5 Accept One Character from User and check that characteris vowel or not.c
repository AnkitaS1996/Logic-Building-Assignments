/*#include<stdio.h>
#include<conio.h>
typedef int No;
#define TRUE 1
#define FALSE 0 */
#include"Header.h"
BOOL chkVowel(ALPHA ch)
{
    //ALPHA ch = '\0';
    if(ch == 'A' || ch == 'a' || ch == 'e' || ch == 'E' || ch == 'i' || ch== 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
BOOL main()
{
    ALPHA cValue = '\0';
    BOOL bRet = FALSE;
    printf("\n \n Enter A Character to chack whether that character is vowel: ");
    scanf("%c",&cValue);
    bRet = chkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("\n It is Vowel");
    }
    else
    {
        printf("\n It is not Vowel");
    }
    getch();
    return 0;
}
