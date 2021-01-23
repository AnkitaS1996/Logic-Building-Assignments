//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////     Statement =  Program Which Accept Number From User And Display Pattern.
//////              Input =  5
/////             Output =  *  *  *  *  *  #  #  #  #  #
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
           iNo = -iNo;
    }

    for(i=0; i < iNo*2; i++)
    {
            if(i < iNo)
            {
                   printf(" *");
            }
            else
            {
                 printf(" #");
            }
    }

}
int main()
{
    int iValue = 0;
    printf("\n ####****____ Program Which Accept Number From User And Display Pattern ____****#### \n");
    printf("\n======================================================\n");
    printf("\n Enter Number to Print Pattern. : ");
    scanf("%d",&iValue);
    printf("\n======================================================\n");
    Display(iValue);
    printf("\n======================================================\n");
    printf("\n Thank You..!!!!");
    printf("\n======================================================\n");
    getch();
    return 0;
}
