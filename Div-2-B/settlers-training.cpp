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
    int n, k;
    cin >> n >> k;
    vi nums (k);
    rep (i, n) {
        int a;
        cin >> a;
        nums[a - 1]++;
    }

    int coins = 0;
    while (nums.back() < n) {
        vi vec (k);
        for (int i = 1; i < k; i++) {
            if (nums[i - 1] > 0) {
                vec[i - 1]--;
                vec[i]++;
            }
        }
        for (int i = 0; i < k; i++) {
            nums[i] += vec[i];
        }
        coins++;
    }

    cout << coins << endl;
    return 0;
}