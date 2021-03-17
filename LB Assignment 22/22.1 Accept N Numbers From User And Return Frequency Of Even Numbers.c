/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 22.1 Accept N Numbers From User And Return Frequency Of Even Numbers.
///     Input =  N   :  6
///         Elements :  85   66   3   80  93   88
///   Output  =  3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Count_Even_Frequency(int Arr[],int iLength)
{
    int i = 0,iFreq = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]%2==0)
        {
            iFreq++;
        }
    }
    return iFreq;
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n===================================================================\n");

    printf("\n Enter Numbers N Of the Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable to Allocate Memory.");
        return - 1;
    }

    printf("\n===================================================================\n");

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===================================================================\n");

    iRet = Count_Even_Frequency(P,iSize);

    printf("\n Count Of Even Number of Frequency is = %d\n",iRet);
    printf("\n===================================================================\n");

    printf("\n\n Thank You..!!!");

    getch();
    return 0;
}
