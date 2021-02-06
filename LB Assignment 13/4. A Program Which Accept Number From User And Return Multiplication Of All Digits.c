/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////    Statement =  A Program Which Accept Number From User And Return Multiplication Of All Digits.c
////                Input : 2395            Input : 1018              Input : 9440             Input : 922432
////              Output : 270           Output : 8                 Output : 144            Output : 864
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int MultDigits(int iNo)
{
        int Mult = 1, temp = 0, Digit = 0;

        temp = iNo;

        while(temp > 0)
        {
                Digit = temp%10;
                if(Digit != 0)
                {
                        Mult = Mult * Digit;
                }
                temp = temp / 10;
        }
        return Mult;
}
int main()
{
        int iValue = 0, iRet= 0;

        printf("\n================******************************=========================\n");

        printf("\n Enter Number : ");
        scanf("%d",&iValue);

        printf("\n================******************************=========================\n");

        iRet = MultDigits(iValue);
        printf("\n================******************************=========================\n");

        printf("\n Multiplication Of All Digits is = %d.\n",iRet );
        printf("\n================******************************=========================\n");

        printf("\n Thank You..!!!\n");
        printf("\n================******************************=========================\n");

        getch();
        return 0;

}
