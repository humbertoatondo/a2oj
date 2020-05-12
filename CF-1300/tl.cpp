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

int main()
{
    c_p_c();
    int n, m;
    cin >> n >> m;
    int mi = INT_MAX, ma = 0;
    rep (i, n) {
        int a;
        cin >> a;
        mi = min(mi, a);
        ma = max(ma, a);
    }

    int v = max(ma, mi * 2);
    rep (i, m) {
        int a;
        cin >> a;
        if (a <= v || mi * 2 > v) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << v << endl;
    return 0;
}