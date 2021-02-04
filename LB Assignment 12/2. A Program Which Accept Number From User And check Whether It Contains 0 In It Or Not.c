/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement = A Program Which Accept Number From User And Check Whether It Contains 0 In It Or Not.
/////                   Input : 2395
/////                 Output : There is no Zero
/////                    Input : 1018
/////                  Output : It Contains Zero
/////                     Input : 9000
/////                  Output : It Contains Zero
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int Digit = 0,Temp = 0;
    Temp = iNo;
    while(Temp > 0)
    {
        Digit = Temp %10;
        if(Digit == 0)
        {
            return TRUE;
        }
        Temp = Temp /10;
    }
    return;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("\n**************************$$$$$$$$$$$$$$$$$$$**************************************\n");
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    printf("\n================*********************************======================\n");

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("\n it Contains Zero.");
        printf("\n================*********************************======================\n");
    }
    else
    {
        printf("\n There is no Zero.");
        printf("\n================*********************************======================\n");
    }

    printf("\n Thank You...!!!!");
    printf("\n================*********************************======================\n");


    getch();
    return 0;

}
