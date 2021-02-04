///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = A Program Which Accept Range From User And Return Addition Of All Even Numbers In Between That Range.c
/////           Input   =     23    30
/////         Output  =    108
////             Input  =    10    18
////           Output  =    70
////              Input  =   -10     2
////           Output  =     Invalid range
////              Input  =   90    18
////            Output  =    Invalid range
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int RangeEvenSum(int iStart, int iEnd)
{
            int iSum = 0;

            if((iStart > iEnd) || (iStart < 0))
            {
                    printf("\n Invalid Number Range...!!!!");
                    printf("\n============*********************==================\n");
                    exit(0);
            }

            while(iStart <= iEnd)
            {
                    if(iStart % 2 == 0)
                    {
                            iSum = iSum + iStart;
                    }
                    iStart++;
            }
            return iSum;
}
int main()
{
            int iValue1 = 0, iValue2 = 0, iRet = 0;

            printf("\n============*********************==================\n");

            printf("\n Enter Starting Point : ");
            scanf("%d",&iValue1);

            printf("\n============*********************==================\n");

            printf("\n Enter Ending Point : ");
            scanf("%d",&iValue2);

            printf("\n============*********************==================\n");

            iRet = RangeEvenSum(iValue1,iValue2);

            printf("\n============*********************==================\n");

            printf("\n Addition is Given Even Number Of Range = %d.",iRet);

            printf("\n============*********************==================\n");

            printf("\n Thank You...!!!!");

            printf("\n============*********************==================\n");

            getch();
            return 0;
}
