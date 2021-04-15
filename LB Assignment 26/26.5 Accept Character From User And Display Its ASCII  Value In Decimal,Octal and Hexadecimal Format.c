///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 26.5 Accept Character From User And Display its ASCII Value in Decimal,Octal And Hexadecimal Format.c
///     Input : A
///    Output : Decimal 65
///             Octal 0101
///             Hexadecimal 0X41
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    printf("\n The Character is %c Display ASCII Value \n\n\t Decimal = %d. \n\n\t Octal is = 0%o. \n\n\t Hexadecimal = 0X%x",ch,ch,ch,ch);
}
int main()
{
    char cValue = '\0';

    printf("\n=======================================================\n");
    printf("\n Enter The Character : ");
    scanf("%c",&cValue);
    printf("\n=======================================================\n");

    Display(cValue);

    printf("\n=======================================================\n");
    printf("\n Thank You..!!!!\n");
    printf("\n=======================================================\n");

    getch();
    return 0;
}
