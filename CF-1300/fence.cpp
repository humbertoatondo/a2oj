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
    vi nums {0};
    int n, k;
    cin >> n >> k;
    int prev = 0;
    rep (i, n) {
        int a;
        cin >> a;
        nums.push_back(a + prev);
        prev += a;
    }

    int index;
    int best = INT_MAX;
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] - nums[i - k] < best) {
            best = nums[i] - nums[i - k];
            index = i;
        }
    }
    cout << index - k + 1 << endl;
    return 0;
}