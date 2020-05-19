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
    int n;
    cin >> n;
    const double PI = 3.141592653589;
    vector<double> nums;
    rep (i, n) {
        double a;
        cin >> a;
        nums.push_back(a);
    }

    sort(nums.rbegin(), nums.rend());
    double res = 0;
    for (int i = 0; i < n; i += 2) {
        res += pow(nums[i], 2) - pow(nums[i + 1], 2);
    }
    cout << fixed << setprecision(10) << res * PI << endl;
    return 0;
}