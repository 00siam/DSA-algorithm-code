#include <iostream>
using namespace std;

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int linearSearch(int *a, int n, int item)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int a[] = {20, 10, 54, 33, 69, 64};
    int size = 6;
    int elemnet = 10;
    printarray(a, size);
    int LSearch = linearSearch(a, size, elemnet);

    if (LSearch == -1)
    {
        printf("Element not found!");
    }
    else
        printf("element found at %d index", LSearch);
    return 0;
}