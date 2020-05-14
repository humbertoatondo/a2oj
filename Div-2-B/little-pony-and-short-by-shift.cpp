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
    vi nums;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        nums.push_back(a);
    }

    int change = 0;
    int s;
    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
            if (nums[0] < nums[n - 1]) {
                change++;
                s = i;
            }
        }
        else if (nums[i] < nums[i - 1]) {
            change++;
            s = i;
        }
    }

    if (is_sorted(nums.begin(), nums.end())) {
        cout << 0 << endl;
    }
    else if (change == 1) {
        cout << n - s << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}