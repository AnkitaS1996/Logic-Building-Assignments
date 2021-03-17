///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements = 21.5 Accept N Numbers From User And Display All Such Elements Which Are Multiples Of 11.c
/// Input   :  N    :   6
///        Elements :  85   66   3   55   93   88
///     OUTPUT = 66   55   88
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i = 0;

    printf("\n");

    for(i = 0; i < iLength;i++)
    {
        if(Arr[i]%11==0)
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

    if(P == NULL)
    {
        printf("\n Unable to Allocate Memory. ");
        return - 1;
    }

    printf("\n=====================================================================\n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n=====================================================================\n");

    Display(P,iSize);

    free(P);

    printf("\n\n Thank You...!!");

    getch();
    return 0;
}
