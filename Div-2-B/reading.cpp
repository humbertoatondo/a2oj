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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vii nums;
    rep (i, n) {
        int a;
        cin >> a;
        nums.push_back(make_pair(a, i + 1));
    }
    sort(nums.rbegin(), nums.rend());
    int mi;
    vi res;
    for (int i = 0; i < k; i++) {
        res.push_back(nums[i].second);
        mi = nums[i].first;
    }
    sort(res.begin(), res.end());
    cout << mi << endl;
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}