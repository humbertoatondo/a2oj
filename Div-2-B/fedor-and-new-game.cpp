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

string to_bitstring(int num, int n) {
    int curr = pow(2, n);
    string res = "";
    while (curr) {
        if (curr <= num) {
            res += "1";
            num -= curr;
        }
        else {
            res += "0";
        }
        curr /= 2;
    }
    return res;
}

int cmp(string me, string soldier) {
    int diffs = 0;
    for (int i = 0; i < me.size(); i++) {
        diffs += abs(me[i] - soldier[i]);
    }
    return diffs;
}

int main()
{
    c_p_c();
    vi soldiers;
    int n, m, k;
    cin >> n >> m >> k;
    rep (i, m) {
        int a;
        cin >> a;
        soldiers.push_back(a);
    }
    int me;
    cin >> me;
    string bme= to_bitstring(me, n);

    int friends = 0;
    for (auto soldier : soldiers) {
        string bs = to_bitstring(soldier, n);
        if (cmp(bme, bs) <= k) {
            friends++;
        }
    }
    cout << friends << endl;
    return 0;
}