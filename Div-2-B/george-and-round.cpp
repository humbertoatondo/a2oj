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
    int n, m;
    cin >> n >> m;
    multiset<int> comp;
    rep (i, n) {
        int a;
        cin >> a;
        comp.insert(a);
    }
    vi rem;
    rep (i, m) {
        int b;
        cin >> b;
        if (comp.find(b) == comp.end()) {
            rem.push_back(b);
            continue;
        }
        comp.erase(comp.lower_bound(b));
    }

    int pos = 0;
    auto it = comp.begin();
    for (int i = 0; i < rem.size() && it != comp.end(); i++) {
        if (rem[i] >= *it) {
            pos++;
            it++;
        }
    }

    cout << comp.size() - pos << endl;
    return 0;
}