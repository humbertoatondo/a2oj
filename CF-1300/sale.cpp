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
    vi tvs;
    int n, m;
    cin >> n >> m;

    rep (i, n) {
        int a;
        cin >> a;
        tvs.push_back(a);
    }

    sort(tvs.begin(), tvs.end());
    int res = 0;
    for (int i = 0; tvs[i] < 0 && m && i < tvs.size(); i++) {
        res -= tvs[i];
        m--;
    }
    cout << res << endl;
    return 0;
}