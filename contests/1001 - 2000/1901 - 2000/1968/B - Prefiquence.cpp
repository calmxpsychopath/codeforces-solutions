#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> //.

void solve() {
    int n, m; std::cin >> n >> m;
    std::string a, b; std::cin >> a >> b;
    
    int i = 0, j = 0, k = 0;
    while(i != n && j != m) {
        if(a[i] == b[j]) {
            ++i, ++j; ++k;
        }
        else ++j;
    }
    
    std::cout << k << '\n';
}

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);std::cout.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input", "r", stdin);
        freopen("output", "w", stdout);
    #endif
    
    int tst; std::cin >> tst;
    while(tst--) solve();
    
    return 0;
}

// g++ -std=c++20 <filename>.cpp
