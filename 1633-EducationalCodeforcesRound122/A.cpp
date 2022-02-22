#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t % 7 == 0)
        {
            cout << t << endl;
        }
        else
        {
            t /= 10;
            for (int i = 0; i < 10; i++)
            {
                if ((t * 10 + i) % 7 == 0)
                {
                    cout << (t * 10 + i) << endl;
                    break;
                }
            }
        }
    }
}