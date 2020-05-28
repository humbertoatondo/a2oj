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
    int n;
    cin >> n;
    vi nums (n);
    rep (i, n) {
        int a;
        cin >> a;
        nums[i] = a;
    }

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    vll dp (n);
    for (int i = 1; i < n; i++) {
        dp[i] = (ll) max(nums[i - 1] - nums[i], 0) + dp[i - 1];
    }
    cout << dp.back() << endl;
    return 0;
}