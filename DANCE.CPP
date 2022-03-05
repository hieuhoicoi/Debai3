#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;

int n;
char tmp;
int prefix[N];
unordered_map<int, int> M;
long long ans = 0;

int main()
{
    freopen("DANCE.INP", "r", stdin);
    freopen("DANCE.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        if (tmp == 'a')
        {
            prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            prefix[i] = prefix[i - 1] - 1;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        M[prefix[i]]++;
    }
    for (auto i : M)
    {
        if (i.second != 0)
        {
            ans += i.second * (i.second - 1) / 2;
        }
    }
    cout << ans;
}