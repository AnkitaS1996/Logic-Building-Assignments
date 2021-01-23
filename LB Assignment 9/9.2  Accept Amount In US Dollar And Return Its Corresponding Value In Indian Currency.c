////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////     Statement = Amount In US Dollar And Return Its Corresponding Value In Indian Currency.
/////////              Input =  10    ,   1200        (Example = 1$ = 70Rs)
////////            Output =  700  ,  84000
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int DollarToINR(int iNo)
{
    return iNo * 70;
}
int main()
{
    int iValue = 0, iRet = 0;

     printf("\n ####****_ Amount In US Dollar And Return Its Corresponding Value In Indian Currency _****#### \n");

     printf("\n======================================================\n");
    printf("\n Enter Number Of USD : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");

    iRet = DollarToINR(iValue);
    printf("\n Value in INR is %d",iRet);

    printf("\n======================================================\n");
    printf("\n \n Thank You...!!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
