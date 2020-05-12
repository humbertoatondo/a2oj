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
    vll v {0}, u {0};
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        u.push_back(a);
        v.push_back(a + v.back());
    }

    sort(u.begin(), u.end());
    for (int i = 1; i <= n; i++) {
        u[i] += u[i - 1];
    }

    int m;
    cin >> m;
    rep (i, m) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << v[r] - v[l - 1] << "\n";
        }
        else {
            cout << u[r] - u[l - 1] << "\n";
        }
    }
    return 0;
}