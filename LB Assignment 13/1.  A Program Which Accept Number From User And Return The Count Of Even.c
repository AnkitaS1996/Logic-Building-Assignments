//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement =  A Program Which Accept Number From User And Return The Count Of Even.c
////                    Input : 2395                     Input : 1018              Input : -1018             Input : 8462
/////                Output : 1                         Output : 2                 Output : 2                 Output : 4
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountEven(int iNo)
{
            int temp = 0, cnt = 0;   //Digit = 0;

            if(iNo <= 0)
            {
                    iNo = -iNo;
            }
            temp = iNo;
            while(temp > 0)
            {
                   // Digit = temp%10;    //// Separate One Digit.

                    if(((temp % 10) % 2 )== 0)
                    {
                            cnt++;
                    }
                    temp /= 10; /////temp = temp / 10;
            }
            return cnt;
}
int main()
{
            int iValue = 0, iRet = 0;

            printf("\n================******************************=========================\n");
            printf("\n Enter Number : ");
            scanf("%d",&iValue);

            printf("\n================******************************=========================\n");
            iRet = CountEven(iValue);

            printf("\n================******************************=========================\n");
            printf("\n Given Number %d & The Count Of Even Number = %d.",iValue,iRet);

            printf("\n================******************************=========================\n");
            printf("\n Thank You....!!!! \n");
            printf("\n================******************************=========================\n");

            getch();
            return 0;
}
