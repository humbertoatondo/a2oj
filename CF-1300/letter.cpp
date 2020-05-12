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
    unordered_map<char, int> available;
    string heading, s;
    getline(cin, heading);
    getline(cin, s);
    
    for (char c : heading) {
        if (c == ' ') continue;
        available[c]++;
    }

    for (char c : s) {
        if (c == ' ') continue;
        if (available.find(c) == available.end() || !available[c]) {
            cout << "NO" << endl;
            return 0;
        }
        available[c]--;
    }
    cout << "YES" << endl;
    return 0;
}