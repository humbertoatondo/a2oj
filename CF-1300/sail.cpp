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
double dist(int x1, int y1, int x2, int y2) {
    return (double) sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}

int main()
{
    c_p_c();
    int t, sx,  sy, ex, ey;
    unordered_map<char, ii> dir { {'E', {1, 0}}, {'S', {0, -1}}, {'W', {-1, 0}}, {'N', {0, 1}} };
    string wind;
    cin >> t >> sx >> sy >> ex >> ey;
    cin >> wind;
    int count = 0;
    for (char c : wind) {
        ii d = dir[c];
        if (dist(sx + d.first, sy + d.second, ex, ey) < dist(sx, sy, ex, ey)) {
            sx += d.first;
            sy += d.second;
        }
        count++;
        if (sx == ex && sy == ey) {
            cout << count << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}