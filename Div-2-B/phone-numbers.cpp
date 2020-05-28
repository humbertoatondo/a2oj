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

int get_type(string num) {
    bool is_pizza = true;
    bool is_taxi = true;
    for (int i = 1; i < 8; i++) {
        if (num[i] == '-') {
            continue;
        }
        if (num[i - 1] == '-') {
            if (num[i - 2] <= num[i]) {
                is_pizza = false;
            }
            if (num[i - 2] != num[i]) {
                is_taxi = false;
            }
        }
        else {
            if (num[i - 1] <= num[i]) {
                is_pizza = false;
            }
            if (num[i - 1] != num[i]) {
                is_taxi = false;
            }
        }
    }
    if (is_taxi) {
        return 0;
    }
    else if (is_pizza) {
        return 1;
    }
    return 2;
}

int main()
{
    c_p_c();
    int n;
    cin >> n;
    vector<pair<string, vi>> names;
    int taxi = 0, pizza = 0, girl = 0;
    rep (i, n) {
        int a;
        string name;
        cin >> a >> name;
        vi options (3, 0);
        rep (j, a) {
            string num;
            cin >> num;
            int type = get_type(num);
            options[type]++;
        }
        names.push_back(make_pair(name, options));
        taxi = max(taxi, options[0]);
        pizza = max (pizza, options[1]);
        girl = max (girl, options[2]);
    }

    vs taxis, pizzas, girls;
    for (auto name : names) {
        if (taxi == name.second[0]) {
            taxis.push_back(name.first);
        }
        if (pizza == name.second[1]) {
            pizzas.push_back(name.first);
        }
        if (girl == name.second[2]) {
            girls.push_back(name.first);
        }
    }

    cout << "If you want to call a taxi, you should call: ";
    for (int t = 0; t < taxis.size() - 1; t++) {
        cout << taxis[t] << ", ";
    }
    cout << taxis.back() << "." << endl;

    cout << "If you want to order a pizza, you should call: ";
    for (int p = 0; p < pizzas.size() - 1; p++) {
        cout << pizzas[p] << ", ";
    }
    cout << pizzas.back() << "." << endl;

    cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
    for (int g = 0; g < girls.size() - 1; g++) {
        cout << girls[g] << ", ";
    }
    cout << girls.back() << "." << endl;
    return 0;
}