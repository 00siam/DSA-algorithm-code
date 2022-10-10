#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    vector c[] = new int[4];
    int a[] = {10, 5, 3, 7, 1, 8};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "size: " << size;
    cout << "before: \n";
    printArray(a, size);
    sort(a, a + size);
    cout << "\nAfter: \n";
    printArray(a, size);
    return 0;
}
