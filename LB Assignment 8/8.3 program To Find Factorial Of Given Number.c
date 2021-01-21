/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////        Statement = Program To Find Factorial Of Given Number.
////                Input =    5    ,   -5     ,   4
////             Output = 120   ,  120    ,  24
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int Factorial(int iNo)
{
    int fact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(fact = 1; iNo > 1; iNo--)
    {
       fact = fact * iNo;
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("\n ####****____ Program To Find Factorial Of Given Number ____****#### \n");
    printf("\n======================================================\n");
    printf("\n Enter Number to Find its Factorial : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");
    iRet = Factorial(iValue);
    printf("\n======================================================\n");
    printf("\n Factorial Of Number is %d",iRet);
    printf("\n======================================================\n");
    printf("\n Thank You..!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
