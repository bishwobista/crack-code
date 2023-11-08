#include<iostream>
using namespace std;

int main() {
    int n, i, j, p;
    cin >> n;
    int a[100][100] = {0};
    int top = 0, btm = 2 * n - 2, lt = 0, rt = 2 * n - 2;
    int value = n; // New variable to hold the value

    while (value >= 1) {
        for (i = lt; i <= rt; i++) {
            a[top][i] = value;
            a[btm][i] = value;
        }
        for (i = top; i <= btm; i++) {
            a[i][lt] = value;
            a[i][rt] = value;
        }
        top++;
        btm--;
        lt++;
        rt--;
        value--; // Decrement the value as you move outwards
    }

    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
