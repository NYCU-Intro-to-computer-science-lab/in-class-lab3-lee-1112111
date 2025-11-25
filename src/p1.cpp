// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

long long factorial(int n, int t) {
    if (n == 0) return t;
    return factorial(n-1, t*=n);
}

long long sum(int n, int t) {
    if (n == 0) return t;
    return sum(n-1, t+=n);
}

int main() {
    int x;
    cin >> x;
    
    cout << factorial(x, 1) << endl;
    cout << sum(x, 0) << endl;
    return 0;
}
