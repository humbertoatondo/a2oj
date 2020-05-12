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
    set<int> s;
    int n, m;
    cin >> n >> m;
    vi nums, diffs(n);
    rep (i, n) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    for (int i = nums.size() - 1; i >= 0; i--) {
        s.insert(nums[i]);
        diffs[i] = s.size();
    }

    rep (i, m) {
        int a;
        cin >> a;
        cout << diffs[a - 1] << endl;
    }
    return 0;
}