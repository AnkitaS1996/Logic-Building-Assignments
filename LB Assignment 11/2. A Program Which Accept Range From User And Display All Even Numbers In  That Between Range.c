/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement =  A Program Which Accept Range From User And Display All Even Numbers In That Between Range.
////             Input : 23     35
/////         Output : 24   26  28  30  32  34
////             Input : 10     10
////          Output : 10
////              Input : -10   2
////           Output : -10  -8  -6  -4  -2  0  2
////              Input : 90   18
////           Output : Invalid range
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    if((iStart > iEnd) || (iEnd < 0))
    {
           printf("\n Invalid Number Range...!!!");
           printf("\n============*********************==================\n");
    }

    while((iStart <= iEnd) || (iEnd < 0))
    {
        if(iStart % 2 == 0)
        {
             printf(" %d",iStart);
        }
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

    printf("\n============*********************==================\n");
    printf("\n Enter Ending Point : ");
    scanf("%d",&iValue2);
    printf("\n============*********************==================\n");

    RangeDisplayEven(iValue1, iValue2);

    printf("\n============*********************==================\n");
    printf("\n Thank You...!!!\n");
    printf("\n============*********************==================\n");

    getch();
    return 0;
}


