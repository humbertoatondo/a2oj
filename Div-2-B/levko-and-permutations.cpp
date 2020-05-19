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
    vi nums(n);
    rep (i, n) {
        nums[i] = i + 1;
    }

    if (n == k) {
        cout << -1 << endl;
        return 0;
    }

    int rem = n - k;
    if (rem % 2 == 0) {
        for (int i = 0; i < rem; i += 2) {
            swap(nums[i], nums[i + 1]);
        }
    }
    else {
        for (int i = 1; i < rem; i += 2) {
            swap(nums[i], nums[i + 1]);
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}