// Graph matrix to list
#include <stdio.h>

int main()
{
    int v, e, i, j;
    int a[20][20];
    printf("Enter vertex: \n");
    scanf("%d", &v);

   for ( i = 1; i <= v; i++)
   {
       for ( j = 1; j <= v; j++)
       {
           scanf("%d",&a[i][j]);
       }
   }
    int x =1;
    for ( i = 1; i <=v; i++)
    {
        for ( j = x; j <= v; j++)
       {
           if(a[i][j]!=0){
               printf("%d %d %d",i,j,a[i][j]);
               printf("\n");
           }
       }
        x++;
    }
    

   

    return 0;
}

// graph list to matrix
// #include<stdio.h>

// int main(){
//     int v,e,i,j;
//     int st,en,w;
//     int a[20][20];
//     printf("Enter vertex: \n");
//     scanf("%d",&v);
//     printf("Enter edge: \n");
//     scanf("%d",&e);

//     for ( i = 1; i <= v; i++)
//     {
//         for ( j = 1; j <= v; j++)
//         {
//             a[i][j] = 0;
//         }  
//     }


//     for ( i = 1; i <= e; i++)
//     {
//         scanf("%d%d%d",&st,&en,&w);
//         a[st][en] = w;
//         a[en][st] = w;
//     }

//     int min = 999;
//     int max = 0;

//     for ( i = 1; i <= v; i++)
//     {
//         for ( j = 1; j <= v; j++)
//         {
//            if(max<a[i][j]){
//                max = a[i][j];
//            }
//            if(min>a[i][j] && a[i][j]!=0){
//                min = a[i][j];
//            }
//            printf("%d ",a[i][j]);
//         }  
//            printf("\n");
//     }


//     int count = 0;
//     for ( i = 1; i <= v; i++)
//     {
//         if(a[i][i]!=0){
//             count++;
//         }
//     }

//     printf("Self loop: %d\n",count);
//     printf("Max: %d\n",max);
//     printf("Min: %d\n",min);
    
    
    
//     return 0;
// }