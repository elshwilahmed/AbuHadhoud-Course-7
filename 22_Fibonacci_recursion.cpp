/*
Write a program to print Fibonacci series of number
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

int Fibonacci(short n) {
    if (n <= 1) return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void PrintFibonacciUsingRecursion(short n) {
    for (int i = 1; i <= 10; i++) {
        cout << Fibonacci(i) << ' ';
    }
}

void njr() {
    PrintFibonacciUsingRecursion(10);
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
