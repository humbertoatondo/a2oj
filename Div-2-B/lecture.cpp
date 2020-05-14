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
    unordered_map<string, string> dict;
    int n, m;
    cin >> n >> m;
    rep (i, m) {
        string left, right;
        cin >> left >> right;
        dict[left] = right;
        dict[right] = left;
    }

    rep(i, n) {
        string str;
        cin >> str;
        if (str.size() <= dict[str].size()) {
            cout << str << " ";
        }
        else {
            cout << dict[str] << " ";
        }
    }
    cout << endl;
    return 0;
}