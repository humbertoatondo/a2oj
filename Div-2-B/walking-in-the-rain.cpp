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

    vi dp (n);
    int best = INT_MAX;
    for (int i = 1; i < n; i++) {
        dp[i] = max(nums[i], nums[i - 1]);
        best = min(best, dp[i]);
    }
    cout << min(best, min(nums.front(), nums.back())) << endl;
    return 0;
}