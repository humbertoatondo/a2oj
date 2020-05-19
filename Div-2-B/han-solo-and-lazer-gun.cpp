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
    vii troopers;
    int n, x, y;
    cin >> n >> x >> y;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        troopers.push_back(make_pair(a, b));
    }

    int cnt = 0;
    set<ii> visited;
    for (int i = 0; i < troopers.size(); i++) {
        if (visited.find(troopers[i]) != visited.end()) {
            continue;
        }
        cnt++;
        for (int j = i + 1; j < troopers.size(); j++) {
            int left = (troopers[i].second - y) * (troopers[j].first - x);
            int right = (troopers[j].second - y) * (troopers[i].first - x);
            if (left == right && visited.find(troopers[j]) == visited.end()) {
                visited.insert(troopers[j]);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}