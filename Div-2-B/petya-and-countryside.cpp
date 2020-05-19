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
        int a;
        cin >> a;
        nums.push_back(a);
    }
    if (n <= 2) {
        cout << n << endl;
        return 0;
    }

    vi left(n, 1), right(n, 1);
    int curr = 2;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] - nums[i - 1] >= 0) {
            left[i] = curr;
            curr++;
        }
        else {
            curr = 2;
        }
    }

    curr = 2;
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] - nums[i + 1] >= 0) {
            right[i] = curr;
            curr++;
        }
        else {
            curr = 2;
        }
    }

    int best = 0;
    for (int i = 0; i < n; i++) {
        best = max(best, left[i] + right[i]);
    }
    cout << best - 1 << endl;
    return 0;
}
