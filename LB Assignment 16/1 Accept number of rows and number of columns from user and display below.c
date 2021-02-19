///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////  Statement =  Accept number of rows and number of columns from user and display below pattern.
/////       I/P =   iRow = 4  iCol = 4
//////       O/P =   A B C D
///////              A B C D
///////              A B C D
//////               A B C D
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);
int main()
{
    int RNo1 = 0, CNo2 = 0;
    printf("\n===================================================\n");
    printf("Enter Numbers Of Rows And Number Of Columns : ");
    scanf("%d%d",&RNo1,&CNo2);
    printf("\n===================================================\n");
    Pattern(RNo1,CNo2);
    printf("\n Thank You...!!!");
    printf("\n===================================================\n");
    getch();
    return 0;
}
void Pattern(int No1,int No2)
{
    int i=0,j=0;
    printf("\n===================================================\n");
    printf("\n");
    for(i=1;i<=No1;i++)
    {
        char ch = 'A';

        for(j=1;j<=No2;j++)
        {
            printf(" %c",ch);
            ch++;
        }
        printf("\n");
    }
    printf("\n===================================================\n");
}
