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
    map<char, int> letters;
    string s, t;
    cin >> s >> t;
    bool automaton = false, array = true;
    int idx = 0;
    for (char c : s) {
        if (t[idx] == c) {
            idx++;
        }
        if (idx == t.size() && s.size() > t.size()) {
            automaton = true;
        }
        letters[c]++;
    }

    if (automaton) {
        cout << "automaton" << endl;
        return 0;
    }

    for (char c : t) {
        letters[c]--;
        if (letters[c] < 0) {
            array = false;
            break;
        }
    }

    if (!automaton && array && s.size() == t.size()) {
        cout << "array" << endl;
    }
    else if (array && s.size() != t.size()) {
        cout << "both" << endl;
    }
    else {
        cout << "need tree" << endl;
    }


    return 0;
}