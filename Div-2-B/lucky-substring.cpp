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
    string num;
    cin >> num;
    map<char, int> lucky;
    for (char c : num) {
        if (c == '7' || c == '4') {
            lucky[c]++;
        }
    }

    if (lucky.empty()) {
        cout << -1 << endl;
    }
    else if (lucky['7'] == lucky['4'] || lucky['7'] < lucky['4']) {
        cout << 4 << endl;
    }
    else {
        cout << 7 << endl;
    }
    return 0;
}