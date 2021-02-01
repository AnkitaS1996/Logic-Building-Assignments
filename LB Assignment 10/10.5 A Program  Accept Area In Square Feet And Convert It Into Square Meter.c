/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// Statement = A Program  Accept Area In Square Feet And Convert It Into Square Meter.
////     Input =    5
////  Output =  0.464515
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double SquareMeter(int iNo)
{
    return iNo*0.0929 ;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("\n ####****__ A Program  Accept Area In Square Feet And Convert It Into Square Meter __****#### \n");
    printf("\n ====================================================== \n");
    printf("\n Enter Area In Square Feet : ");
    scanf("%d",&iValue);
    printf("\n ====================================================== \n");
    dRet = SquareMeter(iValue);
    printf("\n ====================================================== \n");
    printf("\n Given Area in Square feet %d Convert into Square Meter = %0.6lf .",iValue,dRet);
    printf("\n ====================================================== \n");
    printf("\n \n Thank You...!!!!!!");
    printf("\n ====================================================== \n");
    getch();
    return 0;
}
