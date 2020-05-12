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
    string bin;
    cin >> bin;
    int i;
    for (i = 0; i < bin.size() && bin[i] != '0'; i++);
    if (i < bin.size()) {
        cout << bin.substr(0, i) << bin.substr(i + 1, bin.size() - 1) << endl;
    }
    else {
        cout << bin.substr(0, i - 1) << endl;
    }
    return 0;
}