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
    vi i_star, j_star;
    map<int, int> gears;
    int n, m, a, b;
    cin >> n;
    rep (i, n) {
        cin >> a;
        i_star.push_back(a);
    }

    cin >> m;
    rep (i, m) {
        cin >> b;
        j_star.push_back(b);
    }

    for (int ai : i_star) {
        for (int bj : j_star) {
            if (bj % ai == 0) {
                gears[bj / ai]++;
            }
        }
    }
    cout << gears.rbegin()->second << endl;
    return 0;
}