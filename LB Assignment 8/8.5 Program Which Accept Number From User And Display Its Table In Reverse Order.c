////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////     Statement =  Program Which Accept Number From User And Display Its Table In Reverse Order.
///////             Input =   5
///////          Output =   50  45  40  35  30  25  20  15  10  5
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void TableRev(int iNo)
{
    int cnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(cnt = 10; cnt >= 1; cnt--)
    {
        printf(" %d",iNo*cnt);
    }
}
int main()
{
    int iValue = 0;

    printf("\n ####****____ Program For Table Display To Reverse Order ____****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Number to Print Table Reverse Order : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");

    TableRev(iValue);

    printf("\n======================================================\n");
    printf("\n Thank You..!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
