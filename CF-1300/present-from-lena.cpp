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
    // Upper
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n - i; k++) {
            cout << "  ";
        }
        
        int num;
        for (num = 0; num < i; num++) {
            cout << num;
            if (num + 1 <= i) cout << " ";
        }
        
        for (; num >= 0; num--) {
            cout << num;
            if (num - 1 >= 0) cout << " ";
        }
        cout << endl;
    }

    // Mid
    int num;
    for (num = 0; num < n; num++) cout << num << " ";
    for (; num >= 0; num--) {
        cout << num;
        if (num - 1 >= 0) cout << " ";
    }
    cout << endl;

    // Bottom
    for (int i = n - 1; i >= 0; i--) {
        for (int k = 0; k < n - i; k++) {
            cout << "  ";
        }

        int num;
        for (num = 0; num < i; num++) {
            cout << num;
            if (num + 1 <= i) cout << " ";
        }
        
        for (; num >= 0; num--) {
            cout << num;
            if (num - 1 >= 0) cout << " ";
        }
        cout << endl;
    }
    return 0;
}