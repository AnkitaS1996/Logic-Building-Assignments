/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////  Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.c
///////        Input :  iRow = 5 iCol = 5
///////       Output : 2  4  6  8  10
///////                1  3  5  7  9
//////                 2  4  6  8  10
//////                 1  3  5  7  9
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
    int i = 0, j = 0,Num = 1;
    printf("\n========================================================================\n");

    for(i=1;i<=iRow;i++)
    {
        Num = 1;
        for(j=1;j<=iCol;j++)
        {
            if(i%2 != 0)
            {
                printf(" %3d",j*2);
            }
            else
            {
                printf(" %3d",Num);
                Num = Num + 2;
            }
        }
        printf("\n");
    }
    printf("\n========================================================================\n");
}
