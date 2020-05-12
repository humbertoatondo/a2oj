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
    int n;
    cin >> n;
    int lim = sqrt(10e9);
    vector<bool> primes(10e7, true);
    for (int i = 2; i <= lim; i++) {
        if (primes[i] == false) continue;
        for (ll j = (ll) i * i; j < 10e6; j += i) {
            if (j % i == 0) primes[j] = false;
        }
    }

    int t = n;
    for (int i = 3; t; i++) {
        if (primes[i] == true) {
            cout << i << " ";
            t--;
        }
    }
    cout << endl;
    return 0;
}