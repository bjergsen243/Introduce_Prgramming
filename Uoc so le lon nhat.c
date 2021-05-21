#include <iostream>
using namespace std;
int uocle(int n)
{
    int uoc = 0;
    for (int i = (int)n/2; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            uoc = i;
            break;
        }
    }
    return uoc;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << uocle(a[i]) << "\n";
    }
    return 0;
}
