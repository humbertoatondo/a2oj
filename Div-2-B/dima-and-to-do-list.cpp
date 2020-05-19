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
    int n, k;
    cin >> n >> k;
    vi nums;
    rep (i, n) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    int best = INT_MAX;
    int idx;
    for (int i = 0; i < k; i++) {
        int total = 0;
        for (int co = 0, j = i; co < nums.size(); j += k, co += k) {
            total += nums[j % (nums.size())];
        }
        if (total < best) {
            best = total;
            idx = i;
        }
    }
    cout << idx + 1 << endl;
    return 0;
}