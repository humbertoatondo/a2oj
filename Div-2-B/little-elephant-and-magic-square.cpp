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
    vvi grid(3, vi(3, 0));
    int best = 0;
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            int a;
            cin >> a;
            grid[i][j] = a;
            sum += a;
        }
        grid[i][i] = sum;
        best = max(best, sum);
    }
    best++;

    for (int i = 0; i < 3; i++) {
        grid[i][i] = (best - grid[i][i]);
    }

    while (grid[0][0] + grid[0][1] + grid[0][2] != grid[0][0] + grid[1][1] + grid[2][2]) {
        for (int i = 0; i < 3; i++) {
            grid[i][i]++;
        }
    }

    for (vi row : grid) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}