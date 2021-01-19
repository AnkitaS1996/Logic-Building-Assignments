#include<stdio.h>
#include<conio.h>
int SumNonFact(int iNo)
{
    int i = 0, Sum = 0;
    if(iNo <= 0)
    {
        printf("\n Invalid Number.....!!!");
    }
    for(i=1;i <= iNo;i++)
    {
        if(iNo%i != 0)
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("\n Enter Number to Return summation of all its Non-Factors :");
    scanf("%d",&iValue);
    iRet = SumNonFact(iValue);
    printf("\n \n Number to return summation of all its Non-Factor is = %d.",iRet);
    printf("\n \n Thank You......!!!!!!");
    getch();
    return 0;
}
