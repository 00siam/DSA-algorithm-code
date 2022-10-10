#include <stdio.h>
int main()
{
    int v, i, j;
    int adj[10][10];
    scanf("%d", &v);
    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    int x = 1;
    for (i = 1; i <= v; i++)
    {
        for (j = x; j <= v; j++)
        {
            if (adj[i][j] != 0)
            {
                printf("%d %d %d", i, j, adj[i][j]);
                printf("\n");
            }
        }
        x++;
    }
    return 0;
}

/*
5
0 5 0 0 3
5 7 0 6 8
0 0 5 0 0
0 6 0 0 6
3 8 0 6 0
*/