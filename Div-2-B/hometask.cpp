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
    vi nums (n);
    int sum = 0;
    rep (i, n) {
        int a;
        cin >> a;
        nums[i] = a;
        sum += a;
    }
    sort(nums.rbegin(), nums.rend());
    if (nums.back() == 0 && nums.front() == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (nums.back() != 0) {
        cout <<endl;
        cout << -1 << endl;
        return 0;
    }
    else if (sum % 3 == 0) {
        for (int num : nums) {
            cout << num;
        }
        cout << endl;
        return 0;
    }
    
    if (sum % 3 == 1) {
        int n1 = -1, n2 = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] % 3 == 1) {
                if (sum - nums[i] == 0) {
                    cout << 0 << endl;
                    return 0;
                }
                for (int k = 0; k < n; k++) {
                    if (k != i) {
                        cout << nums[k];
                    }
                }
                cout << endl;
                return 0;
            }
            if (nums[i] % 3 == 2 ) {
                if (n1 == -1) {
                    n1 = i;
                }
                else if (n2 == -1) {
                    n2 = i;
                }
            }
        }

        if (sum - nums[n1] - nums[n2] == 0) {
            cout << 0 << endl;
            return 0;
        }
        for (int i = 0; i < n; i++) {
            if (i != n1 && i != n2) {
                cout << nums[i];
            }
        }
        cout << endl;
        return 0;
    }
    
    int n1 = -1, n2 = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] % 3 == 2) {
            if (sum - nums[i] == 0) {
                cout << 0 << endl;
                return 0;
            }
            for (int k = 0; k < n; k++) {
                if (k != i) {
                    cout << nums[k];
                }
            }
            cout << endl;
            return 0;
        }
        if (nums[i] % 3 == 1 ) {
            if (n1 == -1) {
                n1 = i;
            }
            else if (n2 == -1) {
                n2 = i;
            }
        }
    }

    if (sum - nums[n1] - nums[n2] == 0) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (i != n1 && i != n2) {
            cout << nums[i];
        }
    }
    cout << endl;
    return 0;
}