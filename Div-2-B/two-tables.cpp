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
    int na, ma;
    cin >> na >> ma;
    vs ta;
    rep (i, na) {
        string row;
        cin >> row;
        ta.push_back(row);
    }

    int nb, mb;
    cin >> nb >> mb;
    vs tb;
    rep (i, nb) {
        string row;
        cin >> row;
        tb.push_back(row);
    }

    int x = -49, y = -49;
    int best = 0;
    ii res = {0, 0};
    while (x < 50) {
        if (y == 50) {
            x++;
            y = -49;
        }
        int count = 0;
        for (int i = 0; i < nb; i ++) {
            for (int j = 0; j < mb; j++) {
                int xp = i + x;
                int yp = j + y;
                if (xp >= 0 && xp < na && yp >= 0 && yp < ma) {
                    if (ta[xp][yp] == '1' && tb[i][j] == '1') {
                        count++;
                    }
                }
            }
        }
        if (count > best) {
            res.first = x;
            res.second = y;
            best = count;
        }
        y++;
    }
    
    cout << -res.first << " " << -res.second << endl;
    return 0;
}