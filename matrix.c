// #include <stdio.h>

// int main()
// {
//     int r, c, i, j;
//     int a[10][10];
//     printf("How many Row do you want?\n");
//     scanf("%d", &r);
//     printf("How many Column do you want?\n");
//     scanf("%d", &c);

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Printing Element: \n");

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>

int main()
{
    int v,e,i,j,st,en,w;
    int adj[10][10];
    printf("Enter vertex:\n");
    scanf("%d",&v);
    printf("Enter edge:\n");
    scanf("%d",&e);
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            adj[i][j]=0;
        }
    }
    for(i=1;i<=e;i++)
    {
        scanf("%d %d",&st,&en);
        scanf("%d",&w);
        adj[st][en]=w;
        adj[en][st]=w;

    }
    int max=0;
    int min=0;
    for(i=1;i<=v;i++)
    {
        for(j=1;j<=v;j++)
        {
            if(max<adj[i][j])
            {
                max=adj[i][j];
            }
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    printf("max:%d",max);
    return 0;
}
