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
vi nums;
void rec(int n) {
    if (n == 1) {
        return;
    }
    swap (nums[n- 1], nums[n - 2]);
    rec(n - 1);
}

int main()
{
    c_p_c();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        nums.push_back(i);
    }

    rec(n);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}