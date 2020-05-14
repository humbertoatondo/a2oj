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
    vi trees {0};
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        trees.push_back(a);
    }

    vi dp(n + 1, 0);
    for (int i = 1; i < trees.size(); i++) {
        int diff = abs(trees[i] - trees[i - 1]);
        if (i < n) {
            dp[i] = dp[i - 1] + diff + 2;
        }
        else {
            dp[i] = dp[i - 1] + diff + 1;
        }
    }

    cout << dp[n] << endl;
    return 0;
}