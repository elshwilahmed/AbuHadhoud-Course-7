/*
Write a program to convert string toupper and tolower
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

string tolower_string(string s) {
    for (auto &i: s) {
        i = tolower(i);
    }
    return s;
}

string toupper_string(string s) {
    for (auto &i: s) {
        i = toupper(i);
    }
    return s;
}

void njr() {
    string s;
    cout << "Please Enter Your String: \n" << flush;
    getline(cin, s);
    cout << "\nAfter lower: \n" << tolower_string(s) << endl;
    cout << "\nAfter Upper: \n" << toupper_string(s) << endl;
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
