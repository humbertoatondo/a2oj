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
    unordered_map<char, int> letters;
    int k;
    string word;
    cin >> k >> word;

    for (char c : word) {
        letters[c]++;
    }

    for (auto l : letters) {
        if (l.second % k != 0) {
            cout << -1 << endl;
            return 0;
        }
    }

    string res = "";
    for (auto l : letters) {
        int t = l.second / k;
        rep (i, t) {
            res += l.first;
        }
    }

    rep (i, k) {
        cout << res;
    }
    cout << endl;

    return 0;
}