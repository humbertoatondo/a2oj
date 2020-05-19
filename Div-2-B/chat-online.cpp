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
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vii lilX, lilZ;
    rep (i, p) {
        int a, b;
        cin >> a >> b;
        ii pa = make_pair(a, b);
        lilZ.push_back(pa);
    }
    rep (i, q) {
        int c, d;
        cin >> c >> d;
        ii pa = make_pair(c, d);
        lilX.push_back(pa);
    }

    int cnt = 0;
    for (int i = l; i <= r; i++) {
        for (ii z : lilZ) {
            bool flag = false;
            for (ii x : lilX) {
                if ((x.first + i >= z.first && x.first + i <=z.second) || (x.second + i >= z.first && x.first + i <= z.second)) {
                    flag = true;
                    cnt++;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        l++;
    }
    cout << cnt << endl;
    return 0;
}