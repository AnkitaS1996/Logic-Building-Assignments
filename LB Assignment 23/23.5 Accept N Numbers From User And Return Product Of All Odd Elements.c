////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 23.5 Accept N numbers from user and return product of all odd elements.c
///    Input : N : 6
/// Elements : 15 66 3 70 10 88
///   Output : 45
///    Input : N : 6
/// Elements : 44 66 72 70 10 88
///   Output : 0
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int i = 0,Sum = 1;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%2 != 0)
        {
            Sum *= Arr[i];
        }
    }
    return Sum;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);
    printf("\n===========================================================\n");

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Usable to Allocate Memory..");
        return - 1;
    }

    printf("\n===========================================================\n");

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===========================================================\n");
    iRet = Product(P,iSize);

    printf("\n Product Of Odd Element is %d\n",iRet);

    printf("\n===========================================================\n");
    free(P);

    printf("\n Thank You..!!\n");
    printf("\n===========================================================\n");

    getch();
    return 0;
}
