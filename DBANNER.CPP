#include <bits/stdc++.h>
using namespace std;

int n;
const int N = 1e3 + 5;
int a[N];
long long cal(int i)
{
    long long cnt = 0;
    for (int j = i; j <= n; j++)
    {
        if (a[j] >= a[i])
            cnt += a[i];
        else
        {
            break;
        }
    }
    for (int j = i - 1; j >= 1; j--)
    {
        if (a[j] >= a[i])
        {
            cnt += a[i];
        }
        else
        {
            break;
        }
    }
    return cnt;
}

int main()
{
    freopen("DBANNER.INP", "r", stdin);
    freopen("DBANNER.OUT", "w", stdout);
    long long res = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        res = max(res, cal(i));
    }
    cout << res;
}