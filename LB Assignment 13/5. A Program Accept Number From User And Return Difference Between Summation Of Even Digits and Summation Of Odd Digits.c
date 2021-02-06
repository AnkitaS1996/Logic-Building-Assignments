//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////      Statement = A Program Accept Number From User And Return Difference Between Summation Of Even Digits
//////                           And Summation Of Odd Digits.c
/////              Input = 2395
/////            Output =   -15            //(2 - 17)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountDiff(int iNo)
{
            int E_Sum = 0, O_Sum = 0, Dig = 0;

            while(iNo > 0)
            {
                        Dig = iNo % 10;
                        if((Dig % 2) == 0)
                        {
                                E_Sum =  E_Sum + Dig;
                        }
                        else
                        {
                                O_Sum = O_Sum + Dig;
                        }
                        iNo = iNo / 10;
            }
            return E_Sum - O_Sum;
}

int main()
{
            int iValue = 0, iRet = 0;
            printf("\n================******************************=========================\n");

            printf("\n Enter Number : ");
            scanf("%d",&iValue);
            printf("\n================******************************=========================\n");

            iRet = CountDiff(iValue);
            printf("\n================******************************=========================\n");

            printf("\n Summation Of Odd Digit & Summation Even Digit is = %d\n.",iRet);
            printf("\n================******************************=========================\n");

            printf("\nThank You...!!! \n");
            printf("\n================******************************=========================\n");

            getch();
            return  0;

}
