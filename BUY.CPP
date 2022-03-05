#include <bits/stdc++.h>
using namespace std;

struct product
{
    int price, id, num;
};

bool cmp(product a1, product a2)
{
    return a1.price < a2.price;
}

const int N = 1e5 + 5;
int n, m;
product a[N];
int List[N];

int main()
{
    freopen("BUY.INP", "r", stdin);
    freopen("BUY.OUT", "w", stdout);
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].num >> a[i].price;
        a[i].id = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].num >= m)
        {
            List[a[i].id] = m;
            ans += m * a[i].price;
            m = 0;
            break;
        }
        else
        {
            List[a[i].id] = a[i].num;
            ans += a[i].num * a[i].price;
            m -= a[i].num;
        }
    }
    cout << ans << '\n';
    for (int i = 1; i <= n; i++)
    {
        cout << List[i] << '\n';
    }
}