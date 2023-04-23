#include <stdio.h>

int main() 
{
    int i;
    int ans1,ans2,ans3,ans4,ans5;
    int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;
    int total1,total2,total3;


    printf(" Welcome to this Game\n\n");
    printf(" > Press 5 to start this Game\n\n");
    printf(" > Press 0 to end this Game\n\n");

    scanf("%d", &i);
    // set mechanism to begin the game
    if (i == 5)
    {
        printf(" The Game has begun, Goodluck!\n\n");
    }
    else if (i == 0)
    {
        printf(" The Game has ended. Thanks for playing\n\n");
        return 0;
    }
    else
    {
        printf(" Invalid selection.\n\n");
    }

    // Initialize the quiz questions
    if (i == 5)
    {
        printf(" 1) How many continents are there in the world?\n\n");
        printf(" 1) 5\n");
        printf(" 2) 6\n");
        printf(" 3) 7\n");
        printf(" 4) 8\n");
        printf(" 5) 9\n");
    
        printf("Enter your answer\n\n");

        scanf("%d", &ans1);
        if (ans1 == 3)
        {
            printf("That's correct!\n");
            point1 = 5;
            printf("You have scored %d points\n", point1);
        }
        else
        {
            printf("Oops! That's a wrong answer\n");
            point01 = point1 - point1;
            printf("You have scored %d points\n", point01);
        }


         printf(" 2) What is the unit of electric current?\n\n");
         printf(" 1) Joules\n");
         printf(" 2) Newton\n");
         printf(" 3) Kilojoules\n");
         printf(" 4) Ampere\n");
         printf(" 5) Volts\n");
    
         printf("Enter your answer\n\n");

         scanf("%d", &ans2);
         if (ans2 == 4)
         {
             printf("That's correct!\n");
             point2 = point1 + point1;
             printf("You have scored %d points\n", point2);
         }
         else
         {
             printf("Oops! That's a wrong answer\n");
             point02 = point2 - point1;
             printf("You have scored %d points\n", point02);
             
         }
    }
}