///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///// Statement = A Program Which Accept Temperature In Fahrenheit And Convert It Into Celsius
/////      Input =  10
//////  Output =  -12.2222         // (10 - 32) * (5/9) 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double fhtoCs(float fTemp)
{
    return((fTemp - 32) * (5 / 9));
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("\n ####****__  A Program Which Accept Temperature In Fahrenheit And Convert It Into Celsius __****#### \n");
    printf("\n ====================================================== \n");
    printf("\n Enter  Temperature in Fahrenheit  : ");
    scanf("%f",&fValue);
    printf("\n ====================================================== \n");
    dRet = fhtoCs(fValue);
    printf("\n ====================================================== \n");
    printf("\n  temperature in Fahrenheit is %0.f into Celsius is = %0.4f .",fValue,dRet);
    printf("\n ====================================================== \n");
    printf("\n \n Thank  You......!!!!!");
    printf("\n ====================================================== \n");
    getch();
    return 0;
}
