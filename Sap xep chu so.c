#include <iostream>
#include <string>
using namespace std;
void swap(int a, int b)
{
    int i = a;
    a = b;
    b = i;
}
int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] < s[i-1])
            {
                swap(s[i], s[i-1]);
                if (i < 2) i--;
                else i -=2;
            }
        }
        cout << s << "\n";
    }
    return 0;
}
