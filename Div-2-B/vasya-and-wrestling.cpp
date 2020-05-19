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
    vi fi, se;
    ll wf = 0, ws = 0;
    ll a;
    rep (i, n) {
        cin >> a;
        if (a > 0) {
            wf += a;
            fi.push_back(a);
        }
        else {
            ws += -a;
            se.push_back(-a);
        }
    }

    if (wf > ws) {
        cout << "first" << endl;
        return 0;
    }
    else if (wf < ws) {
        cout << "second" << endl;
        return 0;
    }

    int size = max(fi.size(), se.size());
    for (int i = 0; i < size; i++) {
        if (fi[i] > se[i]) {
            cout << "first" << endl;
            return 0;
        }
        else if (fi[i] < se[i]) {
            cout << "second" << endl;
            return 0;
        }
    }

    if (a < 0) {
        cout << "second" << endl;
    }
    else {
        cout << "first" << endl;
    }
    return 0;
}