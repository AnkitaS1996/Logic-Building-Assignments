///////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 27.5 Write a program which accept string from user and display it in Reverse Order.c
///  Input :  “MarvellouS”
/// Output : “SuollevraM”
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int StrLength(char *Str)
{
    int iCnt = 0;
    while(Str[iCnt] != '\0')
    {
        iCnt++;
    }
    return iCnt;
}

void Reverse(char *cArr,char *cDest)
{
    int iLength = StrLength(cArr);
    cArr = cArr + (iLength - 1);
    while(iLength > 0)
    {
        *cDest = *cArr;
        *cDest++;
        *cArr--;
        iLength--;
    }
    *cDest = '\0';
}

int main()
{
    char cArr[20] = "";
    char cDest[20] = "";
    int iRet = 0;

    printf("\n=======================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]",&cArr);

    printf("\n=======================================================\n");
    Reverse(cArr,cDest);

    printf("\n=======================================================\n");
    printf("\n Reverse String is = %s.\n",cDest);
    printf("\n=======================================================\n");

    printf("\n Thank You..!!!\n");
    printf("\n=======================================================\n");

    _getch();
    return 0;
}
