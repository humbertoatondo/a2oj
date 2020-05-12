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
    map<int, int> occur;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        occur[a]++;
    }


    if (occur[5] < 9 && occur[0]) {
        cout << 0 << endl;
    }
    else if (occur[0] == 0) {
        cout << -1 << endl;
    }
    else {
        int fives = (occur[5] / 9) * 9;
        while (fives--) {
            cout << 5;
        }
        while (occur[0]--) {
            cout << 0;
        }
        cout << endl;
    }

    return 0;
}