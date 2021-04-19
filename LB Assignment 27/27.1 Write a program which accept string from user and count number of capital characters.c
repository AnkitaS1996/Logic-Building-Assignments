///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 27.1 .Write a program which accept string from user and count number of capital characters.
/// Input  : "Marvellous Multi OS"
/// Output :  4
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int CountCapital(char *cSrc)
{
    int Cap_Cnt = 0, i = 0;
    printf("\n");
    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 65 && cSrc[i] <= 90)
        {
            Cap_Cnt++;
        }
        i++;
    }
    return Cap_Cnt;

}
int main()
{
    char S_Arr[20];
    int iRet = 0;

    printf("\n======================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]",&S_Arr);

    printf("\n======================================================\n");
    iRet = CountCapital(S_Arr);

    printf("Given String Count Number Of Capital Letter is = %d\n",iRet);
    printf("\n======================================================\n");

    printf("\n Thank You..!!!! \n");
    printf("\n======================================================\n");
    _getch();
    return 0;

}
