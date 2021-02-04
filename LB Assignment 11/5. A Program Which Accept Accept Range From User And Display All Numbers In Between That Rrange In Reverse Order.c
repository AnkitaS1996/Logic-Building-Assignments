/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = A Program Which Accept Accept Range From User And Display All Numbers In Between
////////                     That Range In Reverse Order.c
//////            Input :     23     35
//////         Output :    35   34   33   32   31  30  29   28   27  26   25  24   23
//////            Input :    -10     2
//////         Output :      2   1   0   -1   -2   -3   -4   -5   -6   -7   -8   -9   -10
//////            Input :     90     18
/////          Output :     Invalid range
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void RangeRev(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
        printf("\n Invalid Number Range..!!!");
        printf("\n============*********************==================\n");
        exit(0);
    }

    while(iStart <= iEnd)
    {
        printf(" %d",iEnd);
        iEnd--;
    }
    return;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n============*********************==================\n");

    printf("\n Enter Starting Point : ");
    scanf("%d",&iValue1);

    printf("\n============*********************==================\n");

    printf("\n Enter Ending Point : ");
    scanf("%d",&iValue2);

    printf("\n============*********************==================\n");

    RangeRev(iValue1,iValue2);

    printf("\n============*********************==================\n");

    printf("\n Thank You..!!!");

    printf("\n============*********************==================\n");

    getch();
    return 0;
}
