#include<stdio.h>
#include<conio.h>
float Percentage(int TNo, int ONo)
{
    if((TNo*ONo == 0) || ( TNo < ONo))
    {
       printf("\n Wrong Input..!!!");
    }
    else
    {
         return ((ONo * 100) / TNo);
    }
}
int main()
{
    int Tmark = 0, Omark = 0;
    float fRet = 0;

    printf("\n \n Enter Total Marks. : ");
    scanf("%d",&Tmark);
    printf("\n Enter Obtain Marks. : " );
    scanf("%d",&Omark);

    fRet = Percentage(Tmark,Omark);

    printf("\n \n Percentage is = %f.",fRet);
    printf("\n Thank You...!!!");
    getch();
    return 0;
}
