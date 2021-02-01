//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement =  A Program Which Accept Distance In Kilometer And Convert It Into Meter.
/////                Input =  5
/////              Output = 5000        (Example = 1Kilometer = 1000 Meter)
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int KMtometer(int iNo)
{
    return iNo * 1000;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("\n ####****__ A Program Which Accept Distance In Kilometer And Convert It Into Meter __****#### \n");

    printf("\n ====================================================== \n");
    printf("\n Enter Distance in Kilometer : ");
    scanf("%d",&iValue);
    printf("\n ====================================================== \n");

    iRet = KMtometer(iValue);
    printf("\n Meter is = %d",iRet);

    printf("\n ====================================================== \n");
    printf("\n Thank You...!!!");
    printf("\n ====================================================== \n");

    getch();
    return 0;
}
