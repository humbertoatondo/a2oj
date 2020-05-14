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
    vi lanterns;
    int n, l;
    cin >> n >> l;
    rep (i, n) {
        int a;
        cin >> a;
        lanterns.push_back(a);
    }

    sort(lanterns.begin(), lanterns.end());
    double best = max(lanterns[0], l - lanterns[n - 1]);
    for (int i = 0; i < lanterns.size() - 1; i++){
        double res = (double) (lanterns[i + 1] - lanterns[i]) / 2;
        best = max(best, res);
    }
    cout << fixed << setprecision(11) << best << endl;
    return 0;
}