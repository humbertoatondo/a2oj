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
    vi nums (2 * n);
    rep (i, 2 * n) {
        nums[i] = i + 1;
    }

    for (int i = 1; i < k * 2; i += 2) {
        swap(nums[i], nums[i - 1]);
    }

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}