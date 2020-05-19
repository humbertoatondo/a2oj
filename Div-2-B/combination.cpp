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
    vii nums;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        ii p = make_pair(b, a);
        nums.push_back(p);
    }
    sort(nums.rbegin(), nums.rend());

    int counter = 1;
    int points = 0;
    for (int i = 0; i < nums.size() && counter; i++) {
        points += nums[i].second;
        counter += nums[i].first;
        counter--;
    }
    cout << points << endl;
    return 0;
}