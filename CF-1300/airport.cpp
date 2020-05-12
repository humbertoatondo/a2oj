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
    vi q;
    map<int, int> p;
    int n, m;
    cin >> n >> m;
    rep (i, m) {
        int a;
        cin >> a;
        p[a]++;
        q.push_back(a);
    }

    int t = n;
    int maxx = 0;
    while (t > 0) {
        while (p.rbegin()->second > 0 && t > 0) {
            maxx += p.rbegin()->first;
            p.rbegin()->second--;
            t--;
            p[p.rbegin()->first - 1]++;
        }
        p.erase(p.rbegin()->first);
    }

    sort(q.begin(), q.end());
    t = n;
    int minn = 0;
    for (int i = 0; t > 0; i++) {
        if (i == m) i = 0;
        do {
            minn += q[i];
            q[i]--;
            t--;
        } while (q[i] > 0 && t > 0 );
    }

    cout << maxx << " " << minn << endl;
    return 0;
}