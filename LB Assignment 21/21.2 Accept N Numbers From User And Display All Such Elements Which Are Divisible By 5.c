///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statement = 21.2 Accept N numbers from user and display all such elements which are divisible by 5.
///   Input : N        : 6
///           Elements : 85  66  3  80  93  88
///  Output : 85   80
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]%5==0)
        {
            printf("\t %d",Arr[i]);
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
        printf("\n Unable to allocate Memory");
        return-1;
    }

    printf("\n=====================================================================\n");

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
    printf("\n=====================================================================\n");
    Display(P,iSize);

    printf("\n\n Thank You..!!");

    getch();
    return 0;

}
