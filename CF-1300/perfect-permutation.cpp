/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
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
    int n;
    vi nums;
    cin >> n;
    REP (i, n) {
        nums.push_back(i + 1);
    }
    
    if (n % 2 == 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n; i += 2) {
        swap(nums[i], nums[i + 1]);
    }

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}