////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////// Statement = Accept number of rows and number of columns from user and display below pattern.
////////       I/P = iRow = 4 iCol = 4
////////       O/P = A B C D
////////             a b c d
////////             A B C D
////////             a b c d
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
    printf("\n Thank You For Watching...!!,Press Any Key To Continue\n");
    printf("\n===================================================\n");
    getch();
    return 0;
}
void Pattern(int RNo1,int CNo1)
{
    int i = 0,j = 0;
    char ch1 = 'A';
    printf("\n===================================================\n");
    printf("\n");
    for(i=1;i<=RNo1;i++)
    {
        ch1 = 'A';
        char ch2 = 'a';
        for(j=1;j<=CNo1;j++)
        {
            if(i%2 == 0)
            {
                //ch = 'a';
                printf(" %c",ch2);
                ch2++;
            }
            else
            {
                printf(" %c",ch1);
                ch1++;
            }
        }
        printf("\n");
    }
    printf("\n===================================================\n");
}
