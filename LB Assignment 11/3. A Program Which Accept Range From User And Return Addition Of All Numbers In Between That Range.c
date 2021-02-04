//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////    Statement =  A Program which Accept Range From User And Return Addition Of All Numbers In Between That Range.c
////////            Input : 23    30
////////         Output : 212
///////             Input : 10    18
///////          Output : 126
///////             Input : -10     2
///////          Output : Invalid range
///////             Input : 90      18
///////          Output : Invalid range
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int RangeSum(int iStart, int iEnd)
{
    int R_Sum = 0;

    if((iStart > iEnd) || (iStart < 0))
    {
        printf("\n Invalid Number Range...!!!!!");
        printf("\n============*********************==================\n");
        exit(0);
    }

    while(iStart <= iEnd)
    {
        R_Sum = R_Sum + iStart;
        iStart++;
    }

    return R_Sum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iRet = 0;

    printf("\n============*********************==================\n");
    printf("\n Enter Starting Point : ");
    scanf("%d",&iValue1);
    printf("\n============*********************==================\n");

    printf("\n Enter Ending Point : ");
    scanf("%d",&iValue2);
    printf("\n============*********************==================\n");

    iRet = RangeSum(iValue1,iValue2);

    printf("\n Sum Of Given Number Range = %d.",iRet);
    printf("\n============*********************==================\n");

    printf("\n============*********************==================\n");
    printf("\n Thank You....!!!");
    printf("\n============*********************==================\n");

    getch();
    return 0;
}
