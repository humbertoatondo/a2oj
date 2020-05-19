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
    vii nums;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        nums.push_back(make_pair(a, b));
    }

    sort(nums.begin(), nums.end());
    int a = 0, g = 0;
    string res = "";
    for (ii num : nums) {
        if (a - g < 500) {
            a += num.first;
            res += 'A';
        }
        else {
            g += num.second;
            res += 'G';
        }
    }

    if (abs(a - g) <= 500) {
        cout << res << endl;
        return 0;
    }

    a = g = 0;
    res = "";
    for (ii num : nums) {
        if (g - a < 500) {
            g += num.second;
            res += 'G';
        }
        else {
            a += num.first;
            res += 'A';
        }
    }

    if (abs(a - g) <= 500) {
        cout << res << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}