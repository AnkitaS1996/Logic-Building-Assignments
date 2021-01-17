#include<stdio.h>
#include<conio.h>
float IncomeTax(int iNo)
{
    if(iNo < 500000)
    {
        return iNo;
    }
    else if(iNo <= 1000000 && iNo >= 500000 )
    {
         return(((iNo - 500000) *10)/(100));
    }
    else if(iNo <= 2000000  && iNo >= 1000000)
    {
        return(((iNo - 1000000)*20)/100) + 50000;
    }
    else if(iNo >= 2000000)
    {
        return(((iNo - 2000000)*30)/100) + 50000 +100000;
    }
}
float main()
{
    int iNo = 0;
    float iRet = 0;
    Up:
    printf("\n Enter Income to give its income tax :");
    scanf("%d",&iNo);
    iRet = IncomeTax(iNo);
    printf("\n Given Income Tax is = %0.2f .",iRet);
    goto Up;
    getch();
    return 0;
}
