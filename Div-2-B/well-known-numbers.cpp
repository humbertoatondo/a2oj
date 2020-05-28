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

set<int> nums;

int kbonacci(int k, int n) {
    if (k > n) {
        return 0;
    }
    if (k == n) {
        return k;
    }
    
    return kbonacci(k, n - 1) + kbonacci(k, n - 2);
}

int main()
{
    c_p_c();
    int s, k;
    cin >> s >> k;
    kbonacci(k, s);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}