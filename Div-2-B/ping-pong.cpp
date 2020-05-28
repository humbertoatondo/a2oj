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

bool search(map<ii, vii> adj, ii start, ii goal) {
    set<ii> visited {start};
    queue<ii> q;
    q.push(start);
    while (!q.empty()) {
        ii curr = q.front();
        q.pop();
        if (curr == goal) {
            return true;
        }
        for (ii pa : adj[curr]) {
            if (visited.find(pa) == visited.end()) {
                q.push(pa);
                visited.insert(pa);
            }
        }
    }
    return false;
}

int main()
{
    c_p_c();
    int n;
    cin >> n;
    map<ii, vii> adj;
    vii intervals;
    rep (i, n) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 1) {
            ii curr = make_pair(a, b);
            intervals.push_back(curr);
            adj[curr] = {};
            for (auto pa : adj) {
                int x = pa.first.first;
                int y = pa.first.second;
                if ((a > x && a < y) || (b > x && b < y)) {
                    adj[curr].push_back(pa.first);
                }
                if ((x > a && x < b) || (y > a && y < b)) {
                    adj[pa.first].push_back(curr);
                }
            }
        }
        else {
            if (search(adj, intervals[a - 1], intervals[b - 1])) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    /* for (auto p : adj) {
        cout << p.first.first << "," << p.first.second << " : ";
        for (ii pa : p.second) {
            cout << "(" << pa.first << "," << pa.second << "), ";
        }
        cout << endl;
    } */
    return 0;
}