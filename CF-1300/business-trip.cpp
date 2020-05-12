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
    vi months;
    int k;
    cin >> k;
    rep (i, 12) {
        int m;
        cin >> m;
        months.push_back(m);
    }

    sort(months.rbegin(), months.rend());
    int i;
    for (i = 0; k > 0 && i < months.size(); i++) {
        k -= months[i];
    }
    if (k > 0) {
        cout << -1 << endl;
    }
    else {
        cout << i << endl;
    }
    return 0;
}