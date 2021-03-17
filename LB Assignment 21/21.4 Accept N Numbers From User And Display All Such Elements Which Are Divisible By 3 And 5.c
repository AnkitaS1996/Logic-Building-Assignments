///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 21.4 Accept N Numbers From User And Display All Such Elements Which Are Divisible By 3 And 5.c
/// Input   :  N    :   6
///        Elements :  85   66   3   15   93   88
///     OUTPUT = 15
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int  i = 0;
    printf("\n");
    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%3==0 && Arr[i]%5 == 0)
        {
            printf(" %d",Arr[i]);
        }
    }
    return;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("\n Unable to Allocate Memory. ");
        return - 1;
    }
    printf("\n=====================================================================\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Element : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    printf("\n=====================================================================\n");

    Display(P,iSize);

    free(P);

    printf("\n\n Thank You...!!");

    getch();
    return 0;
}
