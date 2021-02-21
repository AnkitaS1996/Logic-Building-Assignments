////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Statement =  Accept Number Of Rows And Number Of Columns From User And Display Below Pattern.
//      Input =  iRow = 4 iCol = 4
//     Output =  1   2   3   4
//               1   *   *   4
//               1   *   *   4
//               1   2   3   4
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iRow = 0, iCol = 0;
    printf("\n=========================================================================\n");
    printf("\n Enter Any Number Of Rows And Number Of Columns : ");
    scanf("%d%d",&iRow,&iCol);
    Pattern(iRow,iCol);
    printf("\n=========================================================================\n");
    printf("\n Thank You...!!! Press Any Key to continue..!!\n");
    printf("\n=========================================================================\n");
    getch();
    return 0;
}

void Pattern(int iNo1,int iNo2)
{
    int i = 0,j = 0,cnt = 0;
    printf("\n=========================================================================\n");
    for(i = 1;i <= iNo1;i++)
    {
        cnt = 1;
        for(j = 1;j <= iNo2;j++)
        {
            if(j==1 || i==1 || i==iNo1 || j==iNo2)
            {
                printf("  %d",cnt);
            }
            else
            {
                printf("  %c",'*');
            }
            cnt++;
        }
        printf("\n");
    }
    printf("\n==========================================================================\n");
    return 0;
}
