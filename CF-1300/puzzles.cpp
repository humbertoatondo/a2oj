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
    vi puzzles;
    int n, m;
    cin >> n >> m;
    rep(i, m) {
        int a;
        cin >> a;
        puzzles.push_back(a);
    }

    sort(puzzles.begin(), puzzles.end());


    int best = INT_MAX;
    for (int r = n - 1; r < m; r++) {
        best = min(best, puzzles[r] - puzzles[r - n + 1]);
    }
    cout << best << endl;
    return 0;
}