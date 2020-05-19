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
    int n, m;
    cin >> n >> m;
    vi dancers(n + 1, 0);
    rep (i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        set<int> av {1, 2, 3};
        if (dancers[a]) {
            av.erase(dancers[a]);
        }
        if (dancers[b]) {
            av.erase(dancers[b]);
        }
        if (dancers[c]) {
            av.erase(dancers[c]);
        }
        
        if (!dancers[a]) {
            dancers[a] = *av.begin();
        }
        av.erase(dancers[a]);
        
        if (!dancers[b]) {
            dancers[b] = *av.begin();
        }
        av.erase(dancers[b]);

        if (!dancers[c]) {
            dancers[c] = *av.begin();
        }
        av.erase(dancers[c]);
    }

    for (int i = 1; i < dancers.size(); i++) {
        cout << dancers[i] << " ";
    }
    cout << endl;
    return 0;
}