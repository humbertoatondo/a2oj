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

int main()
{
    c_p_c();
    int n;
    cin >> n;
    vii points;
    rep (i, n) {
        int x, y;
        cin >> x >> y;
        points.push_back(make_pair(x, y));
    }

    int res = 0;
    for (auto p1 : points) {
        bool left = false, right = false, bottom = false, top = false;
        for (auto p2 : points) {
            if (p2.first > p1.first && p2.second == p1.second) bottom = true;
            if (p2.first < p1.first && p2.second == p1.second) top = true;
            if (p2.second > p1.second && p2.first == p1.first) right = true;
            if (p2.second < p1.second && p2.first == p1.first) left = true;
        }
        if (left && right && top && bottom) res++;
    }
    cout << res << endl;
    return 0;
}   