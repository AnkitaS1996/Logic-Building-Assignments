////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////     Statement =  A Program Which Accept Number From User And Count Frequency Of 4 In It .
///////                 Input : 2395        Input : 1018        Input : 9440        Input : 922432
//////               Output : 0            Output : 0           Output : 2           Output : 1
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountFour(int iNo)
{
            int Digit = 0,Temp = 0, Cnt = 0;

            Temp = iNo;

            while(Temp > 0)
            {
                        Digit = Temp % 10;
                        if(Digit == 4)
                        {
                                    Cnt++;
                        }
                        Temp = Temp / 10;
            }
            return Cnt;
}
int main()
{
            int iValue = 0;
            int bRet = 0;
            printf("\n**************************$$$$$$$$$$$$$$$$$$$**************************************\n");

            printf("\n Enter Number : ");
            scanf("%d",&iValue);
            printf("\n================*********************************======================\n");

            bRet = CountFour(iValue);
            printf("\n================*********************************======================\n");

            printf("\n Given Number is %d & Count Frequency Of 4 is = %d.\n",iValue,bRet);
            printf("\n================*********************************======================\n");

            printf("\n Thank You...!!!!\n");
            printf("\n================*********************************======================\n");

            getch();
            return 0;
}
