#include <stdio.h>
void fact();
void choose();
int main()
{
    fact();
    return 0;
}
void fact()
{
    int n, f;
    printf(" \n WELCOME TO THE FACTORIAL GUESSING GAME \n");
    printf("\n FACTORIAL MEANS THE PRODUCT OF NUMBERS UP TO THE TERMS YOU ENTER\n");
    printf("\nNOW LET'S START \n");
    printf("\nCHOOSE THE NUMBER BETWEEN 1 TO 10\n");
    scanf("%d", &n);
    while (n > 10)
    {
        printf("\nyou havs typed the wrong number\n");
        for (int k = 1; k <= 100; k++)
        {
            printf(" \nenter the number again\n");
            scanf("%d", &n);
            if (n <= 10)
            {
                break;
            }
        }
    }
    if (n <= 10)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("\n enter the value of factor ");
            scanf("%d", &f);
            int factorial = 1;
            for (int i = 1; i <= n; i++)
            {
                factorial = factorial * i;
            }
            if (factorial == f)
            {
                printf(" its correct that Factorial of %d is %d\n", n, factorial);
                printf("\nThanks for participating\n");
                choose();
                break;
            }
            else
            {
                printf("%d is not the factor of %d", f, n);
           }
            if (j == 1)
                printf("\nyou have 2 chances left");
            if (j == 2)
                printf("\nyou have last chance left");
            if (j == 3)
            {
                printf("\nsorry better luck next time (°-°)\n\n");
                choose();
            }
        }
    }
}
void choose()
{
    printf("\nDO YOU WANT TO PLAY THE GAME AGAIN?\n");
    printf(" \nTYPE 'Y' TO PLAY AGAIN AND 'N' TO EXIT\n");
    char choice;
    scanf("%c", &choice);
    if (choice == 'Y')
    {
        fact();
    }
  else  if (choice == 'N')
    {
        printf("THANKS FOR PARTICIPATING HAVE A NICE DAY");
    }
    else
    {
        printf("invalid code! try again");
        choose();
        }
}
