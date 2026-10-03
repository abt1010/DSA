#include <iostream>
using namespace std;

using ll = long long;

int countSaiBoi(int n, int k) {
    int res;
    if (n % k == 0) {
        res = n / k;
    } else {
        res = n / k + 1;
    }
    return res;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int soSaiBoi = countSaiBoi(n, k);
    int res = 0;
    for (int i = 1; i <= soSaiBoi; ++i) {
        res += i;
    }
    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();



    return 0;
}
