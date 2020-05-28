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
    string num;
    cin >> num;
    bool has_brackets = false;
    int idx = 0;
    if (num[idx] == '-') {
        has_brackets = true;
        idx++;
    }

    string dec = "", flt = "";
    while (idx < num.size() && num[idx] != '.') {
        dec += num[idx];
        idx++;
    }
    idx++;
    while (idx < num.size() && flt.size() < 2) {
        flt += num[idx];
        idx++;
    }

    string left = "";
    int r = dec.size() - 1;
    int c = 0;
    while (r >= 0) {
        left += dec[r];
        r--;
        c++;
        if (c == 3) {
            left += ',';
            c = 0;
        }
    }
    reverse(left.begin(), left.end());
    if (left[0] == ',') {
        left = left.substr(1, left.size() - 1);
    }
    if (flt.empty()) {
        flt += "00";
    }
    else if (flt.size() == 1) {
        flt += '0';
    }

    string res = '$' + left + '.' + flt;
    if (has_brackets) {
        cout << "(" << res << ")" << endl;
    }
    else {
        cout << res << endl;
    }
    return 0;
}