/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define rep(i,n) for(int i=0;i<(n);i++)
/********   Using   ********/
using namespace std;
/********   Type Defs   ********/
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vs;
/********   Init   ********/
void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
/***********************************************************/
/************************   Start   ************************/
/***********************************************************/

ll binomialCoeff(int a, int k)
{
    if (a < k) return 0;
    ll res = 1;
    if (k > a - k) k = a - k;
    for (int i = 0; i < k; i++)
    {
        res *= (a - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    c_p_c();
    int n, m;
    cin >> n >> m;
    ll ma = binomialCoeff(n - m + 1, 2);
    int l = n / m;
    int mod = n % m;
    ll mil = binomialCoeff(l + 1, 2) * mod;
    ll mir = binomialCoeff(l, 2) * (m - mod);
    cout << mil + mir << " " << ma << endl;
    return 0;
}