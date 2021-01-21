///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////  Statement = Accept Single Digit Number From User And Print It Into Word.
///////          Input =      9       ,    -3       ,    12                    .
///////        Output =    Nine   , Three    ,  Invalid Number  .
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
          iNo = -iNo;
    }
    switch(iNo)
    {
            case 1:
                printf("\n One");
                printf("\n======================================================\n");
                break;
            case 2:
                printf("\n Two");
                printf("\n======================================================\n");
                break;
            case 3:
                printf("\n Three");
                printf("\n======================================================\n");
                break;
            case 4:
                printf("\n Four");
                printf("\n======================================================\n");
                break;
            case 5:
                printf("\n Five");
                printf("\n======================================================\n");
                break;
            case 6:
                printf("\n Six");
                printf("\n======================================================\n");
                break;
            case 7:
                printf("\n Seven");
                printf("\n======================================================\n");
                break;
            case 8:
                printf("\n Eight");
                printf("\n======================================================\n");
                break;
            case 9:
                printf("\n Nine");
                printf("\n======================================================\n");
                break;
            /*case 10:
                printf("\n Ten");
                printf("\n======================================================\n");
                break;*/
            default:
                printf("\n Invalid Number.");
                printf("\n======================================================\n");
                break;
    }
}
int main()
{
    int iValue = 0;
    printf("\n ####****____ Accept Single Digit Number From User And Print It Into Word ____****#### \n");
    printf("\n======================================================\n");

    printf("\n Enter Number.. : ");
    scanf("%d",&iValue);

    printf("\n======================================================\n");
    Display(iValue);

    printf("\n======================================================\n");
    printf("\n Thank You...!!!!");
    printf("\n======================================================\n");

    getch();
    return 0;
}
