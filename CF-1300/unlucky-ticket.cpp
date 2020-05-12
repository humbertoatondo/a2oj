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
    vi first, second;
    int n;
    string num;
    cin >> n >> num;
    for (char d : num) {
        if (first.size() < n) {
            first.push_back(d - '0');
        }
        else {
            second.push_back(d - '0');
        }
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    bool high = true,  low = true;
    for (int i = 0; i < n; i++) {
        if (first[i] >= second[i]) low = false;
        if (first[i] <= second[i]) high = false;
    }
    if (low || high) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}