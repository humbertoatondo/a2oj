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
    deque<int> sequence;
    unordered_map<int, int> nums;
    int n, k;
    cin >> n >> k;
    rep (i, n) {
        int a;
        cin >> a;
        sequence.push_back(a);
        nums[a]++;
    }

    int t = 0;
    while (n--) {
        if (nums.size() == 1) {
            cout << t << endl;
            return 0;
        }
        
        int key = sequence[k - 1];
        int toRemove = sequence.front();

        sequence.push_back(key);
        sequence.pop_front();

        nums[key]++;
        nums[toRemove]--;
        if (!nums[toRemove]) {
            nums.erase(toRemove);
        }

        t++;
    }
    cout << -1 << endl;
    return 0;
}