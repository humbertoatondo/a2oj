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
    unordered_map<int, int> home;
    int n;
    cin >> n;
    vii teams(n);
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        teams[i] = make_pair(a, b);
        home[a]++;
    }

    for (auto team : teams) {
        int h = n - 1;
        int v = n - 1;
        int val = home[team.second];
        cout << h + val << " " << v - val << endl;
    }
    return 0;
}