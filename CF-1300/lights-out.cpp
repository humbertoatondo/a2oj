/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
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
    vvi grid(3, vi(3));
    int light;
    vvi moves { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };
    REP (i, 3)
    {
        REP (j, 3)
        {
            cin >> light;
            if (light % 2 == 0) {
                continue;
            }
            light = light % 2;
            grid[i][j] = !grid[i][j];
            for (auto m : moves)
            {
                int x = m[0], y = m[1];
                if (i + x >= 0 && j + y >= 0 && i + x < 3 && j + y < 3) {
                    grid[i + x][j + y] = !grid[i + x][j + y];
                }
            }

        }
    }

    for (auto row : grid) {
        for (int c : row) {
            cout << !c;
        }
        cout << endl;
    }

    return 0;
}