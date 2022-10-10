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
int binarySearch(int *a, int n, int item)
{
    int low, mid, high;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == item){
            return mid;
        }
        else if (a[low] < item)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }

    return -1;
}

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6};//array sorted
    int size = 6;
    int elemnet = 5;
    printarray(a, size);
    int bSearch = binarySearch(a, size, elemnet);

    if (bSearch == -1)
    {
        printf("Element not found!");
    }
    else
        printf("element found at %d index", bSearch);
    return 0;
}