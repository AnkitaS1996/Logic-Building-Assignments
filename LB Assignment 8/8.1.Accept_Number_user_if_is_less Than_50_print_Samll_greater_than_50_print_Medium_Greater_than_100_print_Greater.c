///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////   Statement = 8.1.Accept_Number_user_if_is_less Than_50_print_Samll_greater_than_50_print_Medium_
//////                          Greater_than_100_print_Greater.
///////  Input = 75
///////  Output = Medium
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Number(int iNo)
{
    printf("\n======================================================\n");
    if(iNo < 50)
    {
        printf("\n Given Number %d is Small.",iNo);
        printf("\n======================================================\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("\n Given Number %d is Medium.",iNo);
        printf("\n======================================================\n");
    }
    else
    {
        printf("\n Given Number %d is Greater.",iNo);
        printf("\n======================================================\n");
    }
    return;
}
int main()
{
    int iValue = 0;
    printf("\n ####****__ Program for Less_than_50 is Small Greater_than_50 is Medium & Greater_than_100 is Greater__****####\n");
    printf("\n======================================================\n");
    printf("\n Enter Number : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");
    Number(iValue);
    printf("\n Thank You..!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
