////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////// Statement = 3. Accept Number Of Rows and Number Of Columns from user and display below Pattern .
////////       I/P = iRow = 3 iCol = 5
////////       O/P = A A A A A
////////             B B B B B
////////             C C C C C
////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Pattern(int,int);
int main()
{
    int CNo = 0, RNo=0;
    printf("\n===================================================\n");
    printf("\n Enter Any Numbers Of Rows And Number Of Column : ");
    scanf("%d%d",&RNo,&CNo);
    Pattern(RNo,CNo);
    printf("\n===================================================\n");
    printf("\n Thank You For Watching...!!,Press Any Key To Continue");
    printf("\n===================================================\n");
    getch();
    return 0;
}
void Pattern(int RNo1,int CNo1)
{
    int i = 0,j = 0;
    char ch = 'A';
    printf("\n===================================================\n");
    for(i=1;i<=RNo1;i++)
    {
        for(j=1;j<=CNo1;j++)
        {
            printf(" %c",ch);
        }
        ch++;
        printf("\n");
    }
    printf("\n===================================================\n");
}
