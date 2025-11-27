/*
Write a program to fill a  3x3 matrix with random positive numbers, then check it Palindrome Or not
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

bool IsPalindromeMatrix(vector<vector<int> > &v, short r, short c) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c / 2; j++) {
            if (v[i][j] != v[i][c - 1 - j])
                return false;
        }
    }
    return true;
}

void njr() {
    srand((unsigned) time(NULL));

    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    //v1 = {{1, 2, 1}, {5, 5, 5}, {7, 3, 7}};   Palindrome
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);
    if (IsPalindromeMatrix(v1, 3, 3))
        cout << "\nmatrix is Palindrome\n";
    else
        cout << "\nmatrix is not Palindrome\n";
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
