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
int get_digits(int num) {
    int c = 1;
    while (num /= 10 ) c++;
    return c;
}

int main()
{
    c_p_c();
    int a, b, n;
    cin >> a >> b >> n;
    a *= 10;
    n--;
    for (int i = 0; i < 10; i++) {
        if ((a + i) % b == 0) {
            cout << a + i;
            while (n--) {
                cout << 0;
            }
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}