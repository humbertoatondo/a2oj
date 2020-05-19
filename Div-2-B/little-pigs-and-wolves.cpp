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
    vs grid;
    rep (i, n) {
        string row;
        cin >> row;
        grid.push_back(row);
    }
    
    int count = 0;
    vii pos { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'P') {
                for (auto p : pos) {
                    if (i + p.first >= 0 && i + p.first < n && j + p.second >= 0 && j + p.second < m && grid[i + p.first][j + p.second] == 'W') {
                        count++;
                        grid[i][j] = '.';
                        grid[i + p.first][j + p.second] = '.';
                        break;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}