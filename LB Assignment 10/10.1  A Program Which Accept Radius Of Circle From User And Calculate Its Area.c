/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////      Statement =  A Program Which Accept Radius Of Circle From User And Calculate Its Area.
////////               Input =      5.3           ,  10.4
////////            Output =    88.2026      ,  339.6224
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define PI  3.14
double CircleArea(float Radius)
{
    return  PI * Radius * Radius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("\n ####****___ A Program Which Accept Radius Of Circle From User And Calculate Its Area __****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Radius Of Circle To Calculate Its Area : ");
    scanf("%f",&fValue);
    printf("\n======================================================\n");

    dRet = CircleArea(fValue);
    printf("\n======================================================\n");
    printf("\n Area is = %lf",dRet);        ///////(double = %lf)

    printf("\n======================================================\n");
    printf("\n Thank You..!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
