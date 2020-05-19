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
    vi digits, nums;
    ii mi = make_pair(INT_MAX, 0);
    rep (i, 9) {
        int a;
        cin >> a;
        if (a < mi.first) {
            mi = make_pair(a, i + 1);
        }
        digits.push_back(a);
    }

    int len = n / mi.first;
    if (!len) {
        cout << -1 << endl;
        return 0;
    }
    int v = n % (len * mi.first);


    int right = 8;
    while (right >= 0 && v + mi.first < digits[right]) right--;
    for (int i = 0; i < len; i++) {
        if (right < 0) break;
        if (v + mi.first >= digits[right]) {
            v += mi.first;
            v -= digits[right];
            cout << right + 1;
        }
        else {
            right--;
            i--;
        }
    }
    cout << endl;
    return 0;
}

/*
898207
99745 99746 99748 99752 99760 99776 99808 99872 100000
*/