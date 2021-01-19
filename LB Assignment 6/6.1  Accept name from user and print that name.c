#include<stdio.h>
#include<conio.h>
int main()
{
    char Name[30];
    printf("\n Please Enter Full Name : ");
    //scanf("%s",&Name); // Take Only First Word like Piyush Khairnar.. Output is - Piyush
    scanf("%[^\n]",Name);
    //gets(Name);
    printf("\n Your Name is %s",Name);
    getch();
    return 0;
}
