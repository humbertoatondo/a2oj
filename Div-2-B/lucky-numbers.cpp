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

bool more_fours(int num) {
    int f = 0, s = 0, d = 0;
    while (num) {
        int val = num % 10;
        if (val == 4) f++;
        if (val == 7) s++;
        num /= 10;
        d++;
    }
    return f >= s && d == f + s;
}

int main()
{
    c_p_c();
    ll num;
    cin >> num;
    string str = to_string(num);
    if (str.size() % 2 == 1) {
        int size = str.size() + 1;
        rep (i, size) {
            cout << '4';
        }
        rep (i, size) {
            cout << '7';
        }
        cout << endl;
        return 0;
    }

    while (!more_fours(num)) {
        
    }
    cout << num << endl;
    return 0;
}