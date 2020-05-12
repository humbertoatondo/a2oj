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
    map<int, int> cities;
    int n;
    cin >> n;
    rep (i, n) {
        int a;
        cin >> a;
        if (cities.find(a) != cities.end()) {
            cities[a] = -1;
        }
        else {
            cities[a] = i + 1;  
        }
    }

    auto city = cities.begin();
    if (city->second != -1) {
        cout << city->second << endl;
        return 0;
    }
    cout << "Still Rozdil" << endl;
    return 0;
}