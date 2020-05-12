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
    vi nums;
    int n, m;
    cin >> n >> m;
    rep (i, m) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    ll res = nums[0] - 1;
    for (int i = 0; i < m - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            res += nums[i + 1] + n - nums[i];
        }
        else {
            res += nums[i + 1] - nums[i];
        }
    }
    cout << res << endl;
    return 0;
}