//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////      Statement = Program To Find Odd Factorial Of Given Number.
//////////////              Input = 10                                 , -5
/////////////             Output = 945  (9 * 7 * 5 * 3 * 1)    ,  15   (5 * 3 * 1) 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int OddFactorial(int iNo)
{
    int fact =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(fact =1; iNo > 0; iNo--)
    {
        if(iNo%2 != 0)
        {
            fact = fact * iNo;
        }
    }
    return fact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n ####****___  A Program To Find Odd Factorial Of Given Number __****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Number To Find Out Odd Factorial : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");

    iRet = OddFactorial(iValue);
    printf("\n Odd Factorial Of Number is %d",iRet);

    printf("\n======================================================\n");
    printf("\n Thank You...!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
