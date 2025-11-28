/*
Write a program to print Fibonacci series of number using recursion.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//*-------------------------------------------*
void fastIO(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

//*-------------------------------------------*

/*int PrintFibonacci(short n) {
    if (n <= 1) return n;
    return PrintFibonacci(n - 1) + PrintFibonacci(n - 2);
}*/

void njr() {
    /*for (int i = 1; i <= 10; i++) {
        cout << PrintFibonacci(i) << ' ';
    }*/
    for (int i = 1; i <= 10; i++) {
        if (i <= 2) {
            cout << i << endl;
            continue;
        }
        cout << i - 1 + i - 2 << ' ';
    }
}


signed main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fastIO();
    int t = 1; //cin >> t;
    while (t--) {
        njr();
    }
    return 0;
}
