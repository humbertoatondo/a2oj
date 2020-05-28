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
    int n, m;
    cin >> n >> m;
    vi baskets;
    int left = (m + 1) / 2, right = m % 2 == 0 ? left + 1 : left;
    while (right - left < m) {
        if (right == left) {
            baskets.push_back(left);
        }
        else {
            baskets.push_back(left);
            baskets.push_back(right);
        }
        left--;
        right++;
    }

    for (int i = 0; i < n; i++) {
        cout << baskets[i % m] << "\n";
    }

    return 0;
}