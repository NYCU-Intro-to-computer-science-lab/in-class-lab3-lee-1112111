#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    hanoi(n-1, from, to, aux);

    cout << "Move disk " << n << " from " << from << " to " << to << endl;

    hanoi(n-1, aux, from, to);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
