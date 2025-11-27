/*
Write a program to fill a  3x3 matrix with random positive numbers, then print Minimum and Maximum number
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
int RandomNumber(int from, int to) {
    int num = rand() % (to - from + 1) + from;
    return num;
}

void Set2dArrayElementsWithRandomNumbers(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            int a = RandomNumber(1, 10);
            v[i][j] = a;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
}

int get_min_number(vector<vector<int> > &v) {
    int mn = v[0][0];
    for (auto &i: v) {
        for (auto &j: i) {
            mn = min(j, mn);
        }
    }
    return mn;
}

int get_max_number(vector<vector<int> > &v) {
    int mx = v[0][0];
    for (auto &i: v) {
        for (auto &j: i) {
            mx = max(j, mx);
        }
    }
    return mx;
}

void njr() {
    srand((unsigned) time(NULL));

    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);

    cout << "\nMinimum number is: " << get_min_number(v1) << endl;
    cout << "\nMaximum number is: " << get_max_number(v1) << endl;
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
