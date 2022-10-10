#include <stdio.h>
int main()
{
    int i, j, v, e, sn, en, w;
    int adj[10][10];
    scanf("%d %d", &v, &e);
    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
        {
            adj[i][j] = 0;
        }
    }
    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &sn, &en, &w);
        adj[sn][en] = w;
        adj[en][sn] = w;
    }
    int min = 999;
    int max = 0;
    for (i = 1; i <= v; i++)
    {
        for (j = 1; j <= v; j++)
        {
            if (max < adj[i][j])
            {
                max = adj[i][j];
            }
            if (min > adj[i][j] && adj[i][j] != 0)
            {
                min = adj[i][j];
            }
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (i = 1; i <= v; i++)
    {
        if (adj[i][i] != 0)
        {
            count++;
            printf("Selft loop:%d %d\n", i, i);
        }
    }
    printf("Total Selft Loop:%d\n", count);
    printf("Max:%d\n", max);
    printf("MIn:%d\n", min);
    return 0;
}

/*
Input:
5
7
1 2 5
1 5 3
2 3 7
2 4 6
2 5 8
3 4 5
4 5 6
Input:
5
7
1 2 5
1 5 3
2 2 7
2 4 6
2 5 8
3 3 5
4 5 6
*/

