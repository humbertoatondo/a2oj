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
    set<vi> s;
    for (int i = 1; i * i <= n; i++) {
        for (int j = 1; j < i; j++) {
            int a = 2 * i * j;
            int b = pow(i, 2) - pow(j, 2);
            int c = pow(i, 2) + pow(j, 2);
            int k = 1;
            while (b && c * k <= n) {
                int ak = a * k;
                int bk = b * k;
                int ck = c * k;
                if (ak > bk) swap(ak, bk);
                s.insert({ak, bk, ck});
                k++;
            }
        }
    }

    cout << s.size() << endl;
    return 0;
}