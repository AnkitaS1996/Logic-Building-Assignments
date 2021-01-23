///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement =  A Program To Find Even Factorial Of Given Number.
/////               Input =  10
/////           Output  =   3840  (10*8*6*4*2)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int EvenFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    //for(fact = 1; iNo > 0; iNo--)
    while(iNo > 0)
    {
        if(iNo%2==0)
        {
            fact = fact * iNo;
        }
        iNo--;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n ####****___  A Program To Find Even Factorial Of Given Number __****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Number To Find Even Factorial Of Given Number : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");

    iRet = EvenFactorial(iValue);

    printf("\n Even Factorial of Number is %d.",iRet);

    printf("\n======================================================\n");
    printf("\n Thank You.!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
