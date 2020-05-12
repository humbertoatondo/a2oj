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

    int s, e = -1;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (!flag && (i == n - 1 || nums[i] > nums[i + 1])) {
            s = i;
            flag = true;
        }
        if (flag && (i == n - 1 || nums[i] < nums[i + 1])) {
            e = i;
            break;
        }
    }

    reverse(nums.begin() + s, nums.begin() + e + 1);

    if (is_sorted(nums.begin(), nums.end())) {
        cout << "yes" << endl;
        cout << s + 1 << " " << e + 1 << endl;
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}