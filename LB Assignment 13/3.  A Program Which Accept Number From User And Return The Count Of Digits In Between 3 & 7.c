/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement =  A Program Which Accept Number From User And Return The Count Of Digits In Between 3 & 7.c
/////                Input : 2395                  Input : 1018                Input : 4521                Input : 9922
/////              Output : 1                    Output : 0                    Output : 2                   Output : 0
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int CountRange(int iNo)
{
            int temp = 0, iCnt = 0, i = 0;

            temp  = iNo;

            while(temp > 0)
            {
                if(((temp % 10 ) > 3) && ((temp % 10 ) < 7))     ///// Digit = temp % 10;
                {
                        iCnt++;
                }
                temp /= 10;
            }
            return iCnt;
}
int main()
{
            int iValue = 0, iRet = 0;

            printf("\n================******************************=========================\n");

            printf("\n Enter Number : ");
            scanf("%d",&iValue);
            printf("\n================******************************=========================\n");

            iRet = CountRange(iValue);

            printf("\n================******************************=========================\n");

            printf("\n Given Number is %d & Return count of Digits between 3 & 7 is = %d.",iValue,iRet);

            printf("\n================******************************=========================\n");

            printf("\n Thank You...!!!! \n");

            printf("\n================******************************=========================\n");

            getch();
            return 0;
}
