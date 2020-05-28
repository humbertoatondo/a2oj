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
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    vvi queries (m + 1, vi(3, 0));
    rep (i, m) {
        int t, l, r;
        cin >> t >> l >> r;
        queries[i][0] = t;
        queries[i][1] = l;
        queries[i][2] = r;
    }

    int jump = s < f ? 1 : -1;
    char dir = jump > 0 ? 'R' : 'L';
    int c = 0;
    for (int i = 1; s != f; i++) {
        if (i == queries[c][0]) {
            if ((s >= queries[c][1] && s <= queries[c][2]) || (s + jump >= queries[c][1] && s + jump <= queries[c][2])) {
                cout << "X";
            }
            else {
                cout << dir;
                s += jump;
            }
            c++;
        }
        else {
            cout << dir;
            s += jump;
        }
    }
    cout << endl;
    return 0;
}