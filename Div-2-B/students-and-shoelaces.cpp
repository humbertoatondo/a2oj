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
    vvi grid (n + 1, vi(n + 1));
    vi students (n + 1);
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        grid[a][b] = 1;
        grid[b][a] = 1;
        students[a]++;
        students[b]++;
    }

    int total = 0;
    bool did_change = true;
    while (did_change) {
        did_change = false;
        
        for (int k = 1; k <= n; k++) {
            if (students[k] == 1) {
                for (int i = 1; i <= n; i++) {
                    grid[i][k] = 0;
                    grid[k][i] = 0;
                    did_change = true;
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            students[i] = 0;
            for (int j = 1; j <= n; j++) {
                if (grid[i][j] == 1) {
                    students[i]++;
                }
            }
        }

        if (did_change) {
            total++;
        }
    }
    
    cout << total << endl;
    return 0;
}