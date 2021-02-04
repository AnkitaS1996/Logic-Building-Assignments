///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////        Statement =  A Program Which Accept Range From User And Display All Numbers In Between That Range
////                Input :      23    35
////             Output :   23      24   25   26   27   28  29  30  31  32  33  34  35
////                Input :     -10     2
////             Output :   -10     -9     -8   -7     -6   - 5   -4   -3   -2   -1   0    1    2
////                Input :     90      18
////             Output :   Invalid range
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
        printf("\n Invalid Numbers Range..!!!");
    }

     while(iStart <= iEnd)
    {
        printf(" %d",iStart);
        iStart++;
    }
    return;

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n============*********************==================\n");

    printf("\n Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point : ");
    scanf("%d",&iValue2);

    printf("\n============*********************==================\n");

    RangeDisplay(iValue1,iValue2);

    printf("\n============*********************==================\n");

    printf("\n Thank You...!!!");
    printf("\n============*********************==================\n");

    getch();
    return 0;
}
