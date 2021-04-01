///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///    Statement 25.5 Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D.
///                   Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive)
///         Input : C
///        Output : Your exam at 9.20 AM
///         Input : d
///        Output : Your exam at 10.30 AM
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A' :
        case 'a':
            printf("\n Your Exam at 7AM.");
            break;
        case 'B':
        case 'b':
            printf("\n Your Exam At 8.30AM.");
            break;
        case 'C':
        case 'c':
            printf("\n Your Exam At 9.20AM.");
            break;
        case 'D':
        case 'd':
            printf("\n Your Exam At 10.30AM");
            break;
        default:
            printf("\n Invalid Exam Of Division.");
            break;
    }
    return;
}

int main()
{
    char cValue = '\0';

    printf("\n===========================================================\n");
    printf("\n Enter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    printf("\n===========================================================\n");

    printf("\n Thank You..!!!\n");
    printf("\n===========================================================\n");

    getch();
    return 0;

}
