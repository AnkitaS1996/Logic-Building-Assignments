#include<stdio.h>
#include<conio.h>
float SchoolFees(int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("\n \n 1st Standards Fee are Rs. 8900");
            break;
        case 2:
            printf("\n \n 2nd Standards Fee are Rs. 12790");
            break;
        case 3:
            printf("\n \n 3rd Standards Fee are Rs. 21000");
            break;
        case 4:
            printf("\n \n 4th Standards Fee are Rs. 23450");
            break;
        default:
            printf("\n \n Wrong Input.......!!!!!");
            break;
    }
}
int main()
{
    int iStandard = 0;

    printf("\n \n \n-----------------------****____ SCHOOL MANAEMENT SYSTEM____****-------------------\n \n \n");
    printf("\n \n Enter Standard Primary School  1st to 4th to see Fees. ==  ");
    scanf("%d",&iStandard);

    SchoolFees(iStandard);
    printf("\n \n \n Thanks You.....!!!!!!");
    getch();
    return 0;
}
