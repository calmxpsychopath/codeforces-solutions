#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> //.

void solve() {
    int n; std::cin >> n;
    
    std::vector<int> x(n - 1), a(n);
    for(int& i: x) std::cin >> i;
    
    a[0] = 10000;
    for(int i = 0; i < n - 1; i++) {
        a[i + 1] = a[i] + x[i];
    }
    
    for(const int& i: a) 
        std::cout << i << ' ';
    std::cout << '\n';
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
