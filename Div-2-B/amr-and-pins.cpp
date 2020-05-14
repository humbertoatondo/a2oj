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

double dist(int x, int y, int xp, int yp) {
    double left = pow(yp - y, 2);
    double right = pow(xp - x, 2);
    return sqrt(left + right);
}

int main()
{
    c_p_c();
    int r, x, y, xp, yp;
    cin >> r >> x >> y >> xp >> yp;
    double d = dist(x, y, xp, yp);
    int res = 0;
    while (d > 0) {
        res++;
        d -= r * 2;
    }
    cout << res << endl;
    return 0;
}