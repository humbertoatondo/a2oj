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

vi divisor(ll lim) {
    vi div(lim * 2);
    for (int i = 1; i <= lim; i++) {
        for (int j = i; j <= lim; j += i) {
            div[j]++;
        }
    }
    return div;
}

int main()
{
    c_p_c();
    vi div;
    int a, b, c;
    cin >> a >> b >> c;
    div = divisor((ll) a * b * c);
    ll res = 0;
    ll mod = 1073741824;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                ll ind = i * j * k;
                res += div[ind] % mod;
            }
        }
    }
    cout << res << endl;
    return 0;
}