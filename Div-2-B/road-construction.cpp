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
    set<int> blocked;
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        blocked.insert(a);
        blocked.insert(b);
    }

    int t = 1;
    while (blocked.find(t) != blocked.end()) t++;
    cout << n - 1 << endl;
    for (int i = 1; i <= n; i++) {
        if (i != t) {
            cout << i << " " << t << endl;
        }
    }
    return 0;
}