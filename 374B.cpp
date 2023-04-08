#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n, m, x1, y1, x2, y2;

bool check(ll k) {
    ll d1 = abs(x1 - x2) + abs(y1 - y2);
    ll d2 = abs(x1 - k / m - 1) + abs(y1 - k % m - 1) + abs(x2 - k / m - 1) + abs(y2 - k % m - 1);
    ll d3 = abs(x1 - k / m) + abs(y1 - k % m) + abs(x2 - k / m) + abs(y2 - k % m);
    return (d2 + d3 <= d1 + k);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;
        ll l = 0, r = n * m - 1, ans = -1;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
