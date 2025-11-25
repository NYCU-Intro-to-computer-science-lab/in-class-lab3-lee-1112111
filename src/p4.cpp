// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n <= 1) return 1;
    return fib(n-1) + fib(n-2);
}

void searchFib(int n) {
    cout << "SEARCH fib(" << n << ")" << endl;
    if (n-1>1) {
      cout << "|--" << "SEARCH fib(" << n-1 << ")" << endl;
      cout << "|--" << "GET fib(" << n-1 << ") = " << fib(n-2) << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    searchFib(n);
    cout << fib(n-1) << endl;
    return 0;
}
