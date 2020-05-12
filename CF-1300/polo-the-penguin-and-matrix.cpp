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
    int n, m, d;
    cin >> n >> m >> d;
    vi nums;
    rep (i, n) {
        rep (j, m) {
            int a;
            cin >> a;
            nums.push_back(a);
        }
    }

    sort (nums.begin(), nums.end());
    int mod = nums[0] % d;
    int total = 0;
    for (int num : nums) {
        if (num % d != mod) {
            cout << -1 << endl;
            return 0;
        }
        total += abs(nums[nums.size() / 2] - num);
    }
    cout << total / d << endl;
    return 0;
}
