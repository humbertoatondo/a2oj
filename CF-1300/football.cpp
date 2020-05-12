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
    map<string, int> score;
    int n;
    cin >> n;
    rep (i, n) {
        string a;
        cin >> a;
        score[a]++;
    }
    
    int m = 0;
    string name = "";
    for (auto s : score) {
        if (s.second > m) {
            m = s.second;
            name = s.first;
        }
    }
    cout << name << endl;
    return 0;
}