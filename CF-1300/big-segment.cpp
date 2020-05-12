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
    vvi segments;
    int n;
    cin >> n;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        vi p {a, b, i + 1};
        segments.push_back(p);
    }
    
    sort(segments.begin(), segments.end());
    int i = 0;
    while (i < segments.size() - 1 && segments[i + 1][0] == segments[i][0]) i++;
    vi res = segments[i];
    for (; i < segments.size(); i++) {
        if (segments[i][1] > res[1]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << res[2] << endl;
    return 0;
}