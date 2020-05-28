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

bool is_valid(string date) {
    if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[3]) || !isdigit(date[4]) || !isdigit(date[6]) ||
        !isdigit(date[7]) || !isdigit(date[8]) || !isdigit(date[9]) || date[2] != '-' || date[5] != '-') {
        return false;
    }
    int dd = stoi(date.substr(0, 2));
    int mm = stoi(date.substr(3, 5));
    if (mm > 12) {
        return false;
    }
    set<int> mm31 {1, 3, 5, 7, 8, 10, 12};
    set<int> mm30 {4, 6, 9, 11};
    if ((mm31.find(mm) != mm31.end() && dd > 31) || (mm30.find(mm) != mm30.end() && dd > 30)) {
        return false;
    }
    if (mm == 2 && dd > 28) {
        return false;
    }
    return true;
}

int main()
{
    c_p_c();
    string line;
    cin >> line;
    string date = line.substr(0, 10);
    map<string, char> dates;
    pair<string, int> best {"", 0};
    for (int i = 10; i <= line.size(); i++) {
        if (is_valid(date)) {
            dates[date]++;
            if (dates[date] > best.second) {
                best.first = date;
                best.second = dates[date];
            }
        }
        date.push_back(line[i]);
        date.erase(date.begin());
    }
    cout << best.first << endl;
    return 0;
}

//03-10-2014-10-2014-10-2014