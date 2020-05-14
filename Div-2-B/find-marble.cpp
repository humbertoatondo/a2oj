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
    vi operations {0};
    int n, s, t;
    cin >> n >> s >> t;
    rep (i, n) {
        int op;
        cin >> op;
        operations.push_back(op);
    }
    
    set<int> visited;
    int moves = 0;
    while (visited.find(s) == visited.end()) {
        visited.insert(s);
        if (s == t) {
            cout << moves << endl;
            return 0;
        }
        s = operations[s];
        moves++;
    }
    cout << -1 << endl;
    return 0;
}