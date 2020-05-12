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
    unordered_map<char, int> letters;
    string word;
    cin >> word;
    for (char c : word) {
        letters[c]++;
    }

    int odds = 0;
    for (auto p : letters) {
        if (p.second % 2 != 0) {
            odds++;
        }
    }

    if (odds % 2 == 1 || !odds) {
        cout << "First" << endl;
    }
    else {
        cout << "Second" << endl;
    }
    return 0;
}