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
    vi apples;
    int n, total = 0;
    cin >> n;
    rep (i, n) {
        int w;
        cin >> w;
        apples.push_back(w);
        total += w;
    }

    if (total % 100 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    int k = n;
    while (k--) {
        int s = 0, t = 0;
        for (int i = 0; i < n / 2; i++) {
            s += apples[i];
        }
        for (int i = n / 2; i < n; i++) {
            t += apples[i];
        }

        if (s == t) {
            cout << "YES" << endl;
            return 0;
        }
        rotate(apples.begin(), apples.begin() + 1, apples.end());
    }

    cout << "NO" << endl;
    return 0;
}