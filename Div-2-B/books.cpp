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
    int n, t;
    cin >> n >> t;
    vll books(n + 1, 0);
    rep (i, n) {
        ll a;
        cin >> a;
        books[i + 1] = a + books[i];
    }

    int left = 0, right = 1;
    int best = 0;
    while (right <= n) {
        if (books[right] - books[left] <= t) {
            best = max(best, right - left);
            right++;
        }
        else {
            left++;
        }
    }
    cout << best << endl;
    return 0;
}