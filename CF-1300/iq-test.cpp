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
    rep (i, 4) {
        string row;
        cin >> row;
        grid.push_back(row);
    }

    vii pos { {0, 0}, {1, 0}, {0, 1}, {1, 1} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int white = 0, black = 0;
            for (ii p : pos) {
                if (grid[i + p.first][j + p.second] == '#') {
                    white++;
                }
                else {
                    black++;
                }
            }
            if (black >= 3 || white >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}