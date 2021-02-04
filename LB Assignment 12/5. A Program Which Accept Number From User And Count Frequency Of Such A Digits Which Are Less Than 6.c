////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement = A Program Which Accept Number From User And Count Frequency Of Digits Which Are Less Than 6.
////                Input : 2395            Input : 1018            Input : 9440            Input : 96672
////                Output : 3                Output : 3               Output : 3                Output : 1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int FrequencyCount(int iNo)
{
            int Digit = 0, Temp = 0, Cnt = 0;

            Temp = iNo;

            while(Temp > 0)
            {
                        Digit = Temp % 10;
                        if(Digit < 6)
                        {
                                Cnt++;
                        }
                        Temp = Temp / 10;
            }
            return Cnt;
}
int main()
{
            int iValue = 0 , bRet = 0;
             printf("\n**************************$$$$$$$$$$$$$$$$$$$**************************************\n");

            printf("\n Enter Number : ");
            scanf("%d",&iValue);
            printf("\n================*********************************======================\n");

            bRet = FrequencyCount(iValue);
            printf("\n================*********************************======================\n");

            printf("\n Given Number %d  in Count Frequency Of Digit Less Than 6 is = %d.\n",iValue,bRet);
            printf("\n================*********************************======================\n");

            printf("\n Thank You...!!!\n");
            printf("\n================*********************************======================\n");

            getch();
            return 0;
}
