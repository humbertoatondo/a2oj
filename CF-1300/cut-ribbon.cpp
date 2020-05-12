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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vi vals {a, b, c};
    sort(vals.rbegin(), vals.rend());
    int pieces = 1;
    int curr = n;
    while (true) {
        if (curr - vals[2] >= vals[1]) {
            curr -= vals[2];
        }
        else if (curr - vals[1] >= vals[0]) {
            curr -= vals[1];
        }
        else if (curr - vals[2] == vals[2]) {
            curr -= vals[2];
        }
        else break;
        pieces++;
    }
    cout << pieces << endl;
    return 0;
}