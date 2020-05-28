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
    ll w, h;
    cin >> w >> h;
    ll count = 0;

    for (int w0 = 2; w0 <= w; w0 += 2) {
        for (int h0 = 2; h0 <= h; h0 += 2) {
            count += (w - w0 + 1) * (h - h0 + 1);
        }
    }
    cout << count << endl;
    return 0;
}