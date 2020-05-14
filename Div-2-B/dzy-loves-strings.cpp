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
    string s;
    int k;
    vi letters;
    int best = 0;
    cin >> s >> k;
    rep (i, 26) {
        int a;
        cin >> a;
        letters.push_back(a);
        best = max(best, a);
    }

    ll res = 0;
    int i;
    for (i = 0; i < s.size(); i++) {
        int val = letters[s[i] - 'a'];
        res += val * (i + 1);
    }
    for (int j = 0; j < k; j++, i++) {
        res += best * (i + 1);
    }
    cout << res << endl;
    return 0;
}