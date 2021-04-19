/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 27.2 Write a program which accept string from user and count number of small characters.c
/// Input : "Marvellous"
/// Output : 9
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int Count_Small(char *cStr)
{
    int Cnt_Small = 0, i = 0;

    printf("\n");
    while(cStr[i] != '\0')
    {
        if(cStr[i] >= 97 && cStr[i] <= 122)  ////OR if(cStr[i] >= 'a' && cStr[i] <= 'z')
        {
            Cnt_Small++;
        }
        i++;
    }
    return Cnt_Small;
}

int main()
{
    char cSrc[20];
    int iRet = 0;

    printf("\n======================================================\n");
    printf("\n Enter String : ");
    scanf("%[^\n]",&cSrc);

    printf("\n======================================================\n");
    iRet = Count_Small(cSrc);

    printf("Given String Of Count Number Of Small Character is = %d\n",iRet);
    printf("\n======================================================\n");

    printf("\n Thank You..!!\n");
    printf("\n======================================================\n");

    _getch();
    return 0;

}
