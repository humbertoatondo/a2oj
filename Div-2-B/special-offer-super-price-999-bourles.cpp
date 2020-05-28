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

int count_nines(ll num) {
    int count = 0;
    while (num % 10 == 9) {
        num /= 10;
        count++;
    }
    return count;
}

int count_digits(ll num) {
    int count = 0;
    while (num) {
        num /= 10;
        count++;
    }
    return count;
}

int main()
{
    c_p_c();
    ll p, d;
    cin >> p >> d;
    pair<ll, int> curr = {p, count_nines(p)};
    while (p % 10 != 9 && d) {
        p--;
        d--;
    }
    
    while (p > 0 && d >= 0) {
        int nines = count_nines(p);
        if (nines > curr.second) {
            curr.first = p;
            curr.second = nines;
            if (nines == count_digits(p)) {
                break;
            }
        }
        ll mp = pow(10, nines);
        ll md = pow(10, nines);
        p -= mp;
        d -= md;
    }
    cout << curr.first << endl;
    return 0;
}