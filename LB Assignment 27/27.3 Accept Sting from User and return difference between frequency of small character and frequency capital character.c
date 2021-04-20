//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 27.3 Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.c
///      Input : “MarvellouS”
///     Output : 6 (8-2)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int Diff_Small_Capital_Char(char *cStr)
{
    int Cap_Cnt = 0, Small_Cnt = 0,i = 0;

    printf("\n");
    while(cStr[i] != '\0')
    {
        if(cStr[i] >= 65 && cStr[i] <= 90)
        {
            Cap_Cnt++;
        }
        if(cStr[i] >= 97 && cStr[i] <= 122)
        {
            Small_Cnt++;
        }
        i++;
    }
    return(Small_Cnt - Cap_Cnt);
}

int main()
{
    char cSrc[20];
    int iRet = 0;

    printf("\n======================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]",&cSrc);

    printf("\n======================================================\n");
    iRet = Diff_Small_Capital_Char(cSrc);

    printf("\n Given String Of Difference Between Frequency Of Small Character And Frequency Of Capital Character is = %d.\n",iRet);
    printf("\n======================================================\n");

    printf("\n Thank You..!!\n");
    printf("\n======================================================\n");


}
