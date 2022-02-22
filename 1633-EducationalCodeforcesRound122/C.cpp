#include <iostream>

using namespace std;

#define int long long

int floor(int a, int b)
{
    if (a % b == 0)
    {
        return a / b;
    }
    else
    {
        return a / b + 1;
    }
}

signed main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int hc, dc, hm, dm;
        cin >> hc >> dc >> hm >> dm;
        // coin, weapon, armor
        int k, w, a;
        cin >> k >> w >> a;
        bool can_win = false;
        for (int j = 0; j <= k; j++)
        {
            int hc_ = hc + a * j;
            int dc_ = dc + w * (k - j);
            // それぞれが勝つターン数
            int c_win = floor(hm, dc_) * 2 - 1;
            int m_win = floor(hc_, dm) * 2;
            if (c_win < m_win)
            {
                can_win = true;
                break;
            }
        }
        if (can_win)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}