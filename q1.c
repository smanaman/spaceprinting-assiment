#include <stdio.h>
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int space = 1; space <= 5 - row; space++)
        {
            printf("  ");
        }
        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
}