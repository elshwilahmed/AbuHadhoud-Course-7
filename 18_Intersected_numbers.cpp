/*
Write a program to fill a two 3x3 matrix with random numbers, then print intersected numbers between them
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

bool IsNumberExistInMatrix(vector<vector<int> > &v, int number) {
    for (auto &i: v) {
        for (auto &j: i) {
            if (j == number)
                return true;
        }
    }
    return false;
}

void PrintIntersectedNumbers(vector<vector<int> > &v1, vector<vector<int> > &v2) {
    cout << "Intersected Numbers are:" << endl;
    for (auto &i: v1) {
        for (auto &j: i) {
            if (IsNumberExistInMatrix(v2, j))
                cout << j << "   ";
        }
    }
}

void njr() {
    srand((unsigned) time(NULL));

    vector<vector<int> > v1(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v1);
    cout << "\nMatrix 1:\n";
    Print2dArrayElements(3, 3, v1);

    vector<vector<int> > v2(3, vector<int>(3));
    Set2dArrayElementsWithRandomNumbers(3, 3, v2);
    cout << "\nMatrix 2:\n";
    Print2dArrayElements(3, 3, v2);

    PrintIntersectedNumbers(v1, v2);
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
