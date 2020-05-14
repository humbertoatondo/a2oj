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
    int m, n;
    cin >> m >> n;
    vvi grid(m, vi(n, 0));
    rep (i, m) {
        rep (j, n) {
            int a;
            cin >> a;
            grid[i][j] = a;
        }
    }

    vvi res(m, vi(n, 0));
    int ones = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                ones++;
                bool hor = true;
                for (int k = 0; k < n; k++) {
                    if (!grid[i][k]) {
                        hor = false;
                    }
                }
                bool ver = true;
                for (int k = 0; k < m; k++) {
                    if (!grid[k][j]) {
                        ver = false;
                    }
                }

                if ((!hor && !ver)) {
                    cout << "NO" << endl;
                    return 0;
                }
                if (hor && ver) {
                    res[i][j] = 1;
                }
            }
        }
    }

    int resones = 0;
    for (auto row : res) {
        for (int c : row) {
            resones += c;
        }
    }

    if (!resones && ones) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (vi row : res) {
        for (int c : row) {
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}