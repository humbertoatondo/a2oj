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
    int d, st;
    int low = 0, high = 0;
    cin >> d >> st;
    vii nums;
    rep (i, d) {
        int a, b;
        cin >> a >> b;
        low += a;
        high += b;
        nums.push_back(make_pair(a, b));
    }

    if (st < low || st > high) {
        cout << "NO" << endl;
        return 0;
    }

    vi res(d);
    for (int i = 0; i < nums.size(); i++) {
        res[i] = nums[i].first;
    }

    int rem = st - low;
    while (rem) {
        for (int i = 0; i < nums.size() && rem; i++) {
            if (res[i] < nums[i].second) {
                res[i]++;
                rem--;
            }
        }
    }

    cout << "YES" << endl;
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}