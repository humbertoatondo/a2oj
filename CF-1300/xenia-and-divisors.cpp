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
    map<int, int> nums;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        nums[a]++;
    }

    int lim = n / 3;
    vvi possible;
    while (lim--) {
        vi comb;
        int prev = 1;
        for (auto& pa : nums) {
            if (pa.second > 0 && pa.first % prev == 0) {
                comb.push_back(pa.first);
                pa.second--;
                prev = pa.first;
                if (comb.size() == 3) break;
            }
        }

        if (comb.size() != 3) {
            cout << -1 << endl;
            return 0;
        }
        else {
            possible.push_back(comb);
        }
    }
    
    for (auto v : possible) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}