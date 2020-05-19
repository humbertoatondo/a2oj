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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b != d) {
        int tmp = b;
        a *= d;
        b *= d;
        c *= tmp;
        d *= tmp;
    }
    
    int top = abs(a - c);
    int bottom = max(a, c);
    
    for (int i = 2; i <= min (top, bottom); i++) {
        if (top % i == 0 && bottom % i == 0) {
            top /= i;
            bottom /= i;
            i = 1;
        }
    }
    if (!top && bottom) {
        cout << 0 << "/" << 1 << endl;
    }
    else if (top && !bottom) {
        cout << 1 << "/" << 0 << endl;
    }
    else {
        cout << top << "/" << bottom << endl;
    }
    return 0;
}