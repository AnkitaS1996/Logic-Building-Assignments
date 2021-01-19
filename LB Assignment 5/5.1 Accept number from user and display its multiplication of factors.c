#include<stdio.h>
#include<conio.h>
int MultFact(int iNo)
{
    int Cnt = 1, Sum = 1;
    if(iNo <= 0)
    {
        printf("\n Invalid Number");
    }
    while(iNo > Cnt)
    {
        if(iNo%Cnt == 0)
        {
            Sum = Sum * Cnt;
        }
        Cnt++;
    }
    return Sum;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("\n \n Enter Number To Display Its Multiplication Factors : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\n \n Multiplication Factors is = %d.",iRet);
}
