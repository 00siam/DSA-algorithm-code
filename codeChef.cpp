#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n;
    while (a--)
    {
        int sum = 0;
        cin >> n;
        while (n > 0)
        {
            sum += (n % 10);
            cout << sum << "\n";

            n = n / 10;
        }

        cout << sum << "\n";
    }
    return 0;
}