/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
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
    string str, res;
    cin >> str;
    REP (i, str.size()) {
        if (str[i] == '.') {
            res += '0';
        }
        else if (str[i] == '-' && str[i + 1] == '.') {
            res += '1';
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '-') {
            res += '2';
            i++;
        }
    }
    cout << res << endl;
    return 0;
}