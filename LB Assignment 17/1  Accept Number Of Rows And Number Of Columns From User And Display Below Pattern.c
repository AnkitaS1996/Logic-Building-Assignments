/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////  Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.c
///////        Input : iRow = 4 iCol = 4
///////       Output : 1 2 3 4
///////                5 6 7 8
///////                9 1 2 3
///////                4 5 6 7
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);
    printf("\n========================================================================\n");
    printf("\n Thank You For Watching Press Any Key to Continue..\n");
    printf("\n========================================================================\n");
    getch();
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0,Num = 1;
    printf("\n========================================================================\n");

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(Num <= 9)
            {
               printf(" %2d",Num);
               Num++;
            }
            else
            {
                Num = 1;
                printf(" %2d",Num);
                Num++;
            }
        }
        printf("\n");
    }

    printf("\n========================================================================\n");
}
