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
    vii nums;
    int n, k;
    cin >> n >> k;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        ii p = make_pair(a, b);
        nums.push_back(p);
    }

    sort(nums.begin(), nums.end(), [](const ii& a, const ii& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        else {
            return a.first > b.first;
        }
    });

    ii target = nums[k - 1];
    int ma = k - 1, mi = k - 1;
    while (nums[ma] == target) ma++;
    while (nums[mi] == target) mi--;

    cout << ma - mi - 1 << endl;
    return 0;
}