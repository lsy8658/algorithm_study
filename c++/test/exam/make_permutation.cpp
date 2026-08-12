#include<bits/stdc++.h>
using namespace std;

vector<int> v = {1, 2, 3};

void printV (vector<int> &v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void makePermutation (int n, int r, int depth) {
    if (r == depth) {
        printV(v);
        return;
    }

    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }
}

int main () {
    makePermutation(3,3,0);

    return 0;
}