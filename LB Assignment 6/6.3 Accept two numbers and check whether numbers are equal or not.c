#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = FALSE;
    printf("\n Enter Two Number : ");
    scanf("%d%d",&iValue1,&iValue2);
    iRet = chkEqual(iValue1, iValue2);
    if(iRet == TRUE)
    {
        printf("\n \n Given Two Number is Equal...!!");
    }
    else
    {
        printf("\n \n Given Two Number are Not Equal..!!");
    }
    printf("\n \n Thank You...!!!!!");
    getch();
    return 0;
}
