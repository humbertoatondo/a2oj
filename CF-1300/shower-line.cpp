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
    vvi grid(5, vi(5));
    rep (i, 5) {
        rep(j, 5) {
            int a;
            cin >> a;
            grid[i][j] = a;
        }
    }

    vi line {0, 1, 2, 3, 4};
    int best = 0;
    do {
        int res = 0;
        for (int i = 1; i <= 5; i++) {
            for (int j = i * 2; j <= 5; j++) {
                int x = line[j - 1];
                int y = line[j - 2];
                res += grid[x][y];
                res += grid[y][x];
            }
        }
        best = max(best, res);
    } while (next_permutation(line.begin(), line.end()));

    cout << best << endl;
    return 0;
}