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
    unordered_map<char, int> dict { {'>', 8}, {'<', 9}, {'+', 10}, {'-', 11}, {'.', 12}, {',', 13}, {'[', 14}, {']', 15} };
    string line;
    cin >> line;
    int mod = 1000003;
    int total = 0;
    for (int i = 0; i < line.size(); i++) {
        total *= 16;
        total += dict[line[i]];
        total %= mod;
    }
    cout << total << endl;
    return 0;
}