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

int add_bits(bitset<18> curr, bitset<18> newbitset) {
    return curr.to_ulong() + newbitset.to_ulong();
}

bitset<18> lowbit(bitset<18> bit) {
    bitset<18> tmp(0);
    int i;
    for (i = 0; !bit[i]; i++);
    tmp[i] = 1;
    return tmp;
}

int main()
{
    c_p_c();
    int sum, lim;
    cin >> sum >> lim;

    bitset<18> goal(sum);
    bitset<18> res(0);
    vi nums;
    for (int i = lim; i > 0; i--) {
        bitset<18> tmp(i);
        tmp = lowbit(tmp);
        int tmpint = add_bits(res, tmp);
        bitset<18> t(tmpint);
        if (t.to_string() <= goal.to_string()) {
            res = t;
            nums.push_back(i);
        }
        if (res.to_string() == goal.to_string()) {
            cout << nums.size() << endl;
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}