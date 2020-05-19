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
    int n, k;
    cin >> n >> k;
    vi piles;
    int ma = 0;
    int mi = INT_MAX;
    rep (i, n) {
        int a;
        cin >> a;
        piles.push_back(a);
        ma = max(ma, a);
        mi = min(mi, a);
    }

    if (ma - mi > k) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (int pile : piles) {
        for (int i = 0; i < pile; i++) {
            cout << (i % k) + 1<< " ";
        }
        cout << endl;
    }

    return 0;
}