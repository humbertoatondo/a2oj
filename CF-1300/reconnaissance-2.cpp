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
    vi soldiers;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        soldiers.push_back(a);
    }

    ii couple = make_pair(0, soldiers.size() - 1);
    for (int i = 1; i < soldiers.size(); i++) {
        if (abs(soldiers[i] - soldiers[i - 1]) < abs(soldiers[couple.first] - soldiers[couple.second])) {
            couple.first = i;
            couple.second = i - 1;
        }
    }
    cout << couple.first + 1 << " " << couple.second + 1 << endl;
    return 0;
}