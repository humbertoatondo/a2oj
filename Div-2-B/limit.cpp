/********   All Required Header Files   ********/
#include <bits/stdc++.h>
#include <numeric>
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
    int n, m;
    cin >> n >> m;
    vi pol1 (max(n, m) + 1), pol2 (max(n, m) + 1);
    rep (i, n + 1) {
        int idx = pol1.size() - n - 1 + i;
        int a;
        cin >> a;
        pol1[idx] = a;
    }

    rep (i, m + 1) {
        int idx = pol2.size() - m - 1 + i;
        int a;
        cin >> a;
        pol2[idx] = a;
    }

    int i;
    for (i = 0; i < max(n, m) + 1 && !pol1[i] && !pol2[i]; i++);
    
    if (i == max(n, m) + 1 || pol1[i] == 0) {
        cout << "0/1" << endl;
        return 0;
    }

    if (!pol2[i]) {
        int sig = 0;
        for (int i = 0; i < pol2.size(); i++) {
            if (pol2[i] != 0) {
                sig = pol2[i];
                break;
            }
        }
        if ((pol1[i] < 0 && sig > 0) || (sig < 0 && pol1[i] > 0)) {
            cout << "-Infinity" << endl;
        }
        else {
            cout << "Infinity" << endl;
        }
        return 0;
    }

    int el;
    while ((el = gcd(pol1[i], pol2[i])) != 1) {
        pol1[i] /= el;
        pol2[i] /= el;
    }
    string minus = (pol1[i] < 0 && pol2[i] > 0) || (pol1[i] > 0 && pol2[i] < 0) ? "-" : "";
    cout << minus << abs(pol1[i]) << "/" << abs(pol2[i]) << endl;
    return 0;
}