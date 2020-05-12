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
    int curr = 0;
    int exp = 0;
    while (n) {
        int least = n % 10;
        curr += least * pow(10, exp);
        n /= 10;
        if (curr == 1 || curr == 14 || curr == 144) {
            curr = 0;
            exp = 0;
        }
        else exp++;
    }
    cout << (curr == 0 ? "YES" : "NO") << endl;
    return 0;
}