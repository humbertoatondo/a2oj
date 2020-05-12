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
vector<bool> get_primes() {
    int lim = sqrt(10e12 + 1);
    vector<bool> primes(lim, true);
    primes[1] = false;
    for (int i = 2; i * i < lim; i++) {
        if (!primes[i]) continue;
        for (int j = i * 2; j < lim; j += i) {
            primes[j] = false;
        }
    }
    return primes;
}

int main()
{
    c_p_c();
    vector<bool> primes = get_primes();
    int n;
    cin >> n;
    rep (i, n) {
        ll a;
        cin >> a;
        ll sq = sqrt(a);
        if (sq * sq == a && primes[sq]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}