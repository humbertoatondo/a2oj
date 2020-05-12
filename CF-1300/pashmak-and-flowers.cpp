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
    map<int, int> flowers;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        flowers[a]++;
    }

    int maxx = flowers.rbegin()->first - flowers.begin()->first;
    ll comb;
    if (flowers.size() > 1) {
        comb = (ll) flowers.rbegin()->second * flowers.begin()->second;
    }
    else {
        comb = binomialCoeff(flowers.begin()->second, 2);
    }

    cout << maxx << " " << comb << endl;
    return 0;
}