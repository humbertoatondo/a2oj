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
    int x, y, n;
    cin >> x >> y >> n;
    int mod = 1000000007;
    int idx = 2;
    int curr = y;
    while (idx < n) {
        curr = y - x;
        idx++;
        x = y;
        y = curr;
    }

    if (n == 1) {
        curr = x;
    }
    cout << (curr % mod + mod) % mod << endl;

    return 0;
}