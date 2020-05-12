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
    int n;
    cin >> n;
    int left = 0, right = 0;
    rep (i, n) {
        int x, y;
        cin >> x >> y;
        left += x;
        right += y;
        ii p = make_pair(x, y);
        nums.push_back(p);
    }

    if (left % 2 == 0 && right % 2 == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (auto p : nums) {
        if (left % 2 == 1 && right % 2 == 1 && 
        ((p.first % 2 == 0 && p.second % 2 == 1) || (p.first % 2 == 1 && p.second % 2 == 0))) {
            cout << 1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}