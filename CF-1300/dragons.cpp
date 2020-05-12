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
    vii dragons;
    int s, n;
    cin >> s >> n;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        ii d = make_pair(a, b);
        dragons.push_back(d);
    }

    sort(dragons.begin(), dragons.end());
    for (auto p : dragons) {
        if (s <= p.first) {
            cout << "NO" << endl;
            return 0;
        }
        s += p.second;
    }
    cout << "YES" << endl;
    return 0;
}