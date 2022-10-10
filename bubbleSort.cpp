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

void bubbleSort(int *a, int n)
{
    int temp;

    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < ( n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{

    int a[] = {20, 10, 54, 33, 64};
    int size = 5;

    printarray(a, size);

    bubbleSort(a, size);

    printarray(a, size);

    return 0;
}