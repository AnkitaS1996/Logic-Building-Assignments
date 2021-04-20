////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement 27.4 Write a program which accept string from user and check whether it contains vowels in it or not.c
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///  Vowels => a,e,i,o,u
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///     Input : “marvellous”
///    Output : TRUE
///     Input : “Demo”
///    Output : TRUE
///     Input : “xyz”
///    Output : FALSE
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

#define TRUE 0
#define FALSE 1

typedef int BOOL;

BOOL ChkVowel(char *cSrc)
{
    while(*cSrc != '\0')
    {
        if(*cSrc == 'a' || *cSrc == 'e' || *cSrc == 'i' || *cSrc == 'o' || *cSrc == 'u')
        {
            return TRUE;
        }
        *cSrc++;
    }
    return FALSE;
}

int main()
{
    char cArr[20];

    BOOL bRet = FALSE;
    printf("\n======================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]",&cArr);

    bRet = ChkVowel(cArr);

    printf("\n======================================================\n");
    if(bRet == TRUE)
    {
        printf("\n It is Special Character.\n");
    }
    else
    {
        printf("\n There is no Special Character.\n");
    }
    printf("\n======================================================\n");

    printf("\n Thank You..!!\n");
    printf("\n======================================================\n");

    _getch();
    return 0;
}
