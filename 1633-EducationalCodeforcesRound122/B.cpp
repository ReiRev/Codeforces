#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int c0 = 0;
        int c1 = 0;
        int ans = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        if (c0 == c1)
        {
            if (s.size() == 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << c0 - 1 << endl;
            }
        }
        else
        {
            cout << min(c0, c1) << endl;
        }
    }
}