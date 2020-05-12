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
    map<char, int> fi, se;
    string gi, gj;
    cin >> gi >> gj;
    if (gi.size() != gj.size()) {
        cout << "NO" << endl;
        return 0;
    }
    
    int diff = 0;
    for (int i = 0; i < gi.size(); i++) {
        if (gi[i] != gj[i]) diff++;
        fi[gi[i]]++;
        se[gj[i]]++;
    }
    if (diff == 2 && fi == se) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}   