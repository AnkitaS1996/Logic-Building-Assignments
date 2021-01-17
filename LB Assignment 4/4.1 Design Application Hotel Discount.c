#include<stdio.h>
#include<conio.h>
float calculateBill(int iAmount)
{
    if(iAmount<=500)
    {
        printf("\n \n There is No Discount in amount  is = %d",iAmount);
        return;
    }
    else if(iAmount<1500 && iAmount >= 500)
    {
        iAmount = iAmount - (iAmount /10);
        printf("\n The Given Bill  Amount discount is = %d",iAmount);
    }
    else if(iAmount >= 1500)
    {
        iAmount = iAmount - (iAmount / 15);
        printf("\n The Given bill Amount discount is = %d",iAmount);
    }
}
int main()
{
    int iAmount = 0;
    printf("\n Enter a Amount of Bill To give a Discount : ");
    scanf("%d",&iAmount);
    calculateBill(iAmount);
    return 0;
    //printf("\n \n Amount is %d Discount is = %d",iAmount,calculateBill(iAmount));
}
