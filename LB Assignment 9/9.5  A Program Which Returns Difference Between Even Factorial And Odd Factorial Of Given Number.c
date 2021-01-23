///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////  Statement =  A Program Which Returns Difference Between Even Factorial And Odd Factorial Of Given Number
////           Input  =     5                   , 10
////        Output  =    -7   (8 - 15)     ,  2895  (3840 - 945) 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int FactorialDiff(int iNo)
{
    int fact = 0, Sum1 = 1, Sum2 = 1;    //////////////(sum1 = fact1)  (sum2 = fact 2)
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(fact = 1;iNo>0;iNo--)
    {
        if(iNo%2 == 0)
        {
            Sum1= Sum1 * iNo;     //////fact1= fact1* iNo;
        }
        else if(iNo%2 != 0)
        {
            Sum2= Sum2 * iNo;       /////fact2 = fact2 * iNo;
        }
    }
    return Sum1 - Sum2;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n ####****_ A Program Which Returns Difference Between Even Factorial And Odd Factorial Of Given Number _****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Number To Difference Between Even Factorial & Odd Factorial : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");

    iRet = FactorialDiff(iValue);
    printf("Factorial Difference is %d",iRet);

    printf("\n======================================================\n");
    printf("\n Thank You...!!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
