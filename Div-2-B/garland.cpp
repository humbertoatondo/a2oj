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
    string av, ne;
    cin >> av >> ne;
    map<char, ii> ch;
    for (char c : av) {
        ch[c].first++;
    }
    for (char c : ne) {
        ch[c].second++;
    }

    int total = 0;
    for (auto p : ch) {
        if (!p.second.first) {
            cout << -1 << endl;
            return 0;
        }
        if (!p.second.second) {
            continue;
        }
        total += min(p.second.first, p.second.second);
    }
    total = total ? total : -1;
    cout << total << endl;
    return 0;
}