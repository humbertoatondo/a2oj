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
    vi nums;
    int total = 0;
    rep (i, n) {
        int a;
        cin >> a;
        total += a;
        nums.push_back(a);
    }

    int dp[n + 1];
    dp[0] = 0;
    int best = 0;
    int bestIdx = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (!nums[i]) dp[i + 1] = dp[i] + 1;
        else dp[i + 1] = max(0, dp[i] - 1);

        if (dp[i + 1] > best) {
            best = dp[i + 1];
            bestIdx = i;
        }
    }

    int s = bestIdx;
    while (dp[s] > 0) s--;

    for (int i = s; i <= bestIdx; i++)  {
        total += nums[i] ? -1 : 1;
    }

    cout << total << endl;
    return 0;
}