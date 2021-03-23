/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 23.4 Accept N numbers from user And Accept Range, Display All Elements From That Range.c
///        Input : N : 6
///        Start : 60
///          End : 90
///     Elements : 85 66 3 76 93 88
///       Output : 66 76 88 85
///        Input : N : 6
///        Start : 30
///          End : 50
///     Elements : 85 66 3 76 93 88
///       Output :
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
    int i = 0;
    for(i = 0;i < iLength;i++)
    {
        if(iStart <= Arr[i] && iEnd >= Arr[i])
        {
            printf("\n Start Point to End Point Numbers Are => %d.",Arr[i]);
        }
    }
    printf("\n===========================================================\n");
    return;
}

int main()
{
    int iSize = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *P = NULL;

    printf("\n===========================================================\n");
    printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    printf("\n===========================================================\n");
    printf("\n Enter The Starting point : ");
    scanf("%d",&iValue1);

    printf("\n===========================================================\n");
    printf("\n Enter the ending point : ");
    scanf("%d",&iValue2);

    printf("\n===========================================================\n");
    P = (int*)malloc(iSize*sizeof(int));

    if(P==NULL)
    {
        printf("\n Unable to allocate Memory");
        return-1;
    }

    printf("\n===========================================================\n");

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    printf("\n===========================================================\n");

    Range(P,iSize,iValue1,iValue2);

    printf("\n===========================================================\n");
    free(P);

    printf("\n Thank You...");
    printf("\n===========================================================\n");

    getch();
    return 0;
}
