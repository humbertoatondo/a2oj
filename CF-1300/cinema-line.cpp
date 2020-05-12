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
    unordered_map<int, int>change;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        if (a == 25) {
            change[25]++;
        }
        else if (a == 50) {
            change[25]--;
            change[50]++;
        }
        else {
            if (change[50] && change[25]) {
                change[50]--;
                change[25]--;
            }
            else if (change[25] >= 3) {
                change[25] -= 3;
            }
            else {
                cout << "NO" << endl;
                return 0;
            }
        }

        if (change[25] < 0 || change[50] < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}