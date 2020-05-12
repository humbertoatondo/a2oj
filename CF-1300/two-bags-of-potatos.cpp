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
    int y, k, n;
    cin >> y >> k >> n;

    bool flag = true;
    int jump = k;
    while (jump < y) jump += k;
    for (int i = jump - y; i + y <= n; i += k) {
        if (i == 0) continue;
        cout << i << " ";
        flag = false;
    }

    if (flag) {
        cout << -1 << endl;
    }
    else {
        cout << endl;
    }
    cout << endl;
    return 0;
}