/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = A Program Which Accept Number From User And Count Frequency Of 2 In It.
/////               Input : 1018           Input : 9000            Input : 922432               Input : 2395
/////             Output : 0              Output : 0               Output : 3                      Output : 1
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountTwo(int iNo)
{
             int Temp = 0, Digit = 0, cnt = 0;
             Temp = iNo;
              while(Temp > 0)
              {
                          Digit = Temp % 10;
                          if(Digit == 2)
                          {
                                    cnt++;
                          }
                          Temp = Temp / 10;
              }
              return cnt;
}
int main()
{
            int iValue = 0;
            int bRet = 0;

            printf("\n**************************$$$$$$$$$$$$$$$$$$$**************************************\n");

            printf("\n Enter Number : ");
            scanf("%d",&iValue);
            printf("\n================*********************************======================\n");

            bRet = CountTwo(iValue);
            printf("\n================*********************************======================\n");

            printf("\n Given Number is %d & Count Frequency Of 2 is = %d.",iValue,bRet);
            printf("\n================*********************************======================\n");

            printf("\n Thank You...!!!!");
            printf("\n================*********************************======================\n");

            getch();
            return 0;
}
