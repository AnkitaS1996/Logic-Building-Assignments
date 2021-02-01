/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////       Statement = A Program Which Accept Width & Height Of Rectangle From User And Calculate Its Area
/////               Input = Width = 5.3,    Height = 9.78
////             Output = Area =  51.834
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double RectArea(float Weight, float Height)
{
    return Weight * Height;
}
int main()
{
    float fValue1= 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    printf("\n ####****__A Program Which Accept Width & Height Of Rectangle From User And Calculate Its Area __****#### \n");

    printf("\n======================================================\n");
    printf("\n Enter Width Of Rectangle : ");
    scanf("%f",&fValue1);
    printf("\n======================================================\n");

    printf("\n======================================================\n");
    printf("\n Enter Height Of Rectangle : ");
    scanf("%f",&fValue2);
    printf("\n======================================================\n");

    dRet = RectArea(fValue1, fValue2);
    printf("\n======================================================\n");
    printf("\n Area Of Rectangle is = %lf",dRet);

    printf("\n======================================================\n");
    printf("\n \n Thank You....!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
