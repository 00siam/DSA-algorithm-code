#include <stdio.h>

int main()
{

    int r, c, i, j;
    int a[10][10];
    printf("How many Row do you want?\n");
    scanf("%d", &r);
    printf("How many Column do you want?\n");
    scanf("%d", &c);

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Printing Adjancy Matrix: \n");

    for (i = 1; i <= r; i++)
    {
        printf("%d ---> ",i);
        for (j = 1; j <= c; j++)
        {
            if (a[i][j] > 0)
            {
                printf("%d , ",j);
            }
        }
        printf("\n");
    }

    return 0;
}