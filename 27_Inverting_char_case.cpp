/*
Write a program to invert char case {(upper --> lower) / (lower --> upper)}
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

char invert_char(char c) {
    if (islower(c))
        return toupper(c);
    return tolower(c);
}

void njr() {
    char s;
    cout << "Please Enter Your character: \n" << flush;
    cin >> s;
    cout << "\nAfter inverting: \n" << invert_char(s) << endl;
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
