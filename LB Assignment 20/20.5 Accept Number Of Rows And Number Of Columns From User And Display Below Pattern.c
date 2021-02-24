//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////// Statement 20.5 = Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.
//////      Input : iRow = 5 iCol = 5
//////     Output : 1  2  3  4  5
//                  1  2        5
//                  1     3     5
//                  1        4  5
//                  1  2  3  4  5
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("\n========================================================================\n");
    printf("\n Enter Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iValue1,&iValue2);
    printf("\n========================================================================\n");
    Pattern(iValue1,iValue2);
    printf("\n========================================================================\n");
    printf("\n Thank You...!!! \n\n Press Any Key to continue..!!\n");
    printf("\n========================================================================\n");
    getch();
    return 0;
}
void Pattern(int iRow,int iCol)
{
    int No1 = 0, No2 = 0,Num = 0;
    printf("\n========================================================================\n\n");
    for(No1 = 1;No1 <= iRow;No1++)
    {
        Num = 1;
        for(No2 = 1;No2 <= iCol;No2++)
        {
            if(No1==1 || No2==1 || No1==iRow || No2==iCol ||No1==No2 )
            {
                printf(" %3d",Num);
            }
            else
            {
                printf("    ");
            }
            Num++;
        }

        printf("\n");
    }
    printf("\n========================================================================\n");
    return;
}
