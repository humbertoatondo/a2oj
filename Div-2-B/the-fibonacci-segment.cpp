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
    rep (i, n) {
        ll a;
        cin >> a;
        nums.push_back(a);
    }

    if (nums.size() < 3) {
        cout << nums.size() << endl;
        return 0;
    }

    int cnt = 2;
    int best = 2;
    for (int i = 2; i < nums.size(); i++) {
        if (nums[i] == nums[i - 1] + nums[i - 2]) {
            cnt++;
        }
        else {
            cnt = 2;
        }
        best = max(best, cnt);
    }
    cout << best << endl;
    return 0;
}