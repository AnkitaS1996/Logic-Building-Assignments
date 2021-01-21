////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////      Statement = Program Which Accept Number From User And Display Its Table.
//////              Input  =  2
///////           Output =  2  4  6  8  10  12  14  16  18  20 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Table(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i =1; i <= 10; i++)
    {
        printf(" %d",iNo * i);
    }
}
int main()
{
    int iValue = 0;
    printf("\n ####****____ Program Which Accept Number From User And Display Its Table ____****#### \n");
    printf("\n======================================================\n");
    printf("\n Enter Number to Print Its Table.. : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");
    Table(iValue);
    printf("\n======================================================\n");
    printf("\n Thank You...!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
