/*
    Write a program to fill two 3x3 Matrix with random numbers, then check if they are Typical or not
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
            cout << setfill('0') << setw(2) << v[i][j] << " ";
        }
        cout << endl;
    }
}

int SumOf2DMatrix(short r, short c, vector<vector<int> > &v) {
    int sum = 0;
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            sum += v[i][j];
        }
    }
    return sum;
}

bool AreTypicalMatrices(short r, short c, vector<vector<int> > &v1, vector<vector<int> > &v2) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            if (v1[i][j] != v2[i][j])
                return false;
        }
    }
    return true;
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

    if (AreTypicalMatrices(3, 3, v1, v2))
        cout << "\nMatrices are Typical.\n";
    else
        cout << "\nMatrices are not Typical.\n";
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
