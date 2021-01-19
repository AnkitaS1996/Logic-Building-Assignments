#include<stdio.h>
#include<conio.h>
int FactDiff(int iNo)
{
    int i = 0,Sum1 = 0, Sum2 = 0;
    if(iNo <= 0)
    {
        printf("\n \n Invalid Number...!!!!!");
    }
    for(i = 1; i < iNo; i++)
    {
        if(iNo%i  !=  0)
        {
            Sum1 = Sum1 + i;
        }
        else
        {
            Sum2 = Sum2 + i;
        }
    }
    return Sum2 - Sum1;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n Enter Number to return difference between summation of all its Factor and Non-Factor");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("\n Return Number  summation of all its Factor And Non-Factor = %d.",iRet);

    printf("\n \n Thank You...!!!");
    getch();
    return 0;

}
