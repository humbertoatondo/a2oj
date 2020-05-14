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
    string n;
    cin >> n;
    int s = -1;
    for (int i = 0; i < n.size(); i++) {
        int curr = n[i] - '0';
        if (curr % 2 == 0 && (s == -1 || n.back() <= n[s])) {
            s = i;
        }
    }
    
    if (s >= 0) {
        swap(n[s], n.back());
        cout << n << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}