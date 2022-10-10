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

void insertionSort(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

int main()
{

    int a[] = {20, 10, 54, 33, 64};
    int size = 5;

    printarray(a, size);

    insertionSort(a, size);

    printarray(a, size);

    return 0;
}