#include<stdio.h>
#include<conio.h>
int  TouristBill(int iKilometer)
{
    int iRet = 0;
    if(iKilometer < 100)
    {
        iRet = iKilometer*25;
    }
    else if(iKilometer >= 100)
    {
        iRet = iKilometer*15;
    }
    return ;
}
int main()
{
    int iKilometer = 0, iRet = 0;
    printf("\n \n ----------------------**** DESIGN APPLICATION BILLS FOR TOURIST COMPANY ****-----------------------\n \n");

    printf("\n Enter Kilometer of Running cars to give its Bills : ");
    scanf("%d",&iKilometer);

    iRet = TouristBill(iKilometer);
    printf("\n \n Running Cars Kilometer is %d And Your Bills is = %d.",iKilometer,iRet);

    printf("\n \n Thank You.....!!!!!!!");
    getch();
    return 0;
}
