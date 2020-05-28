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

ll sx(ll num) {
    ll sum = 0;
    while (num) {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}

int main()
{
    c_p_c();
    ll n;
    cin >> n;
    for (ll i = sqrt(n); i; i--) {
        ll tmp = (n / i) - i;
        if (tmp <= 90) {
            if (tmp == sx(i)) {
                cout << i << endl;
                return 0;
            }
        }
        else {
            break;
        }
    }
    cout << -1 << endl;
    return 0;
}