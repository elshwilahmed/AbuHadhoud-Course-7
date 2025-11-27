/*
    Write a program to fill 3x3 Matrix with random numbers, then check if it scalar or not
    v = {{n,0,0},{0,n,0},{0,0,n}} --->  scalar matrix : n > 0 || n < 0
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
            int a = RandomNumber(0, 10);
            v[i][j] = a;
        }
    }
}

void Print2dArrayElements(short r, short c, vector<vector<int> > &v) {
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

bool AreScalarMatrix(short r, short c, vector<vector<int> > &v) {
    int temp = v[0][0];
    for (short i = 0; i < r; i++) {
        for (short j = 0; j < c; j++) {
            if (i == j && v[i][j] != temp)
                return false;
            if (i != j && v[i][j] != 0)
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

    if (AreScalarMatrix(3, 3, v1))
        cout << "\nMatrix is scalar\n";
    else
        cout << "\nMatrix is not scalar\n";
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
