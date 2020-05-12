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
    map<int, vi> periods;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        periods[a].push_back(i);
    }

    vii res;
    for (auto p : periods) {
        if (p.second.size() < 2) {
            ii valid = make_pair(p.first, p.second.size() - 1);
            res.push_back(valid);
        }
        else {
            bool flag = false;
            int diff = p.second[1] - p.second[0];
            for (int i = 2; i < p.second.size(); i++) {
                if (p.second[i] - p.second[i - 1] != diff) {
                    flag = true;
                }
            }
            if (!flag) {
                ii valid = make_pair(p.first, diff);
                res.push_back(valid);
            }
        }
    }
    
    cout << res.size() << endl;
    for (auto p : res) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}