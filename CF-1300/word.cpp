/********   All Required Header Files   ********/
#include <bits/stdc++.h>
/********   For Loops   ********/
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
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
    string word;
    cin >> word;
    int low = 0, up = 0;
    for (char c : word) {
        low += islower(c) ? 1 : 0;
        up += isupper(c) ? 1 : 0;
    }

    for (char& c : word) {
        c = low >= up ? tolower(c) : toupper(c);
    }
    cout << word << endl;
    return 0;
}