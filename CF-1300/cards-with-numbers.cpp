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
    vii nums;
    int n;
    cin >> n;
    rep(i, n * 2) {
        int a;
        cin >> a;
        ii p = make_pair(a, i + 1);
        nums.push_back(p);
    }

    sort(nums.begin(), nums.end());
    for (int i = 1; i < nums.size(); i += 2) {
        if (nums[i].first != nums[i - 1].first) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int i = 1; i < nums.size(); i += 2) {
        cout << nums[i - 1].second << " " << nums[i].second << endl;
    }
    
    return 0;
}