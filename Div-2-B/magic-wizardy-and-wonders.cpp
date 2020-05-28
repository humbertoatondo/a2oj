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
    int n, d, l;
    cin >> n >> d >> l;
    vi nums (n + 1);
    int ma = l * (n) / 2;
    int mi = (n) / 2;

    int evensum = 0;
    for (int i = 2; i <= n; i += 2) {
        nums[i]++;
        evensum++;
    }
    if (evensum > ma) {
        cout << -1 << endl;
        return 0;
    }

    while (evensum < mi) {
        for (int i = 2; i <= n && evensum < mi; i += 2) {
            nums[i]++;
            evensum++;
        }
    }

    int oddsum = 0;
    while (oddsum < evensum) {
        for (int i = 1; i <= n; i += 2) {
            nums[i]++;
            oddsum++;
        }
    }

    while (d > 0 && oddsum - evensum != d) {
        for (int i = 1; i <= n; i += 2) {
            nums[i]++;
            if (nums[i] > l) {
                cout << -1 << endl;
                return 0;
            }
            oddsum++;
        }
    }

    while (d < 0 && oddsum - evensum > d) {
        for (int i = 2; i <= n && oddsum - evensum > d; i += 2) {
            nums[i]++;
            if (nums[i] > l) {
                cout << -1 << endl;
                return 0;
            }
            evensum++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}