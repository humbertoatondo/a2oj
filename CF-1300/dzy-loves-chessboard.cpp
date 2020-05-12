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
    vs grid;
    int n, m;
    cin >> n >> m;
    rep (i, n) {
        string row;
        cin >> row;
        grid.push_back(row);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.') {
                if ((i + j) % 2 == 0) {
                    grid[i][j] = 'B';
                }
                else {
                    grid[i][j] = 'W';
                }
            }
        }
    }

    for (auto r : grid) {
        cout << r << endl;
    }
    return 0;
}