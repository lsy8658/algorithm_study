#include <bits/stdc++.h>

using namespace std;

// int main () {
//     int a[] = {1,2,3};

//     do {
//         for (int i : a) cout << i << " ";
//         cout << "\n";
//     } while (next_permutation(&a[0], &a[0] + 3));
// }

int main () {
    vector<int> a = {1,2,3};
    sort(a.begin(), a.end());
    do {
        for (int i : a) cout << i << " ";
        cout << "\n";
    } while (next_permutation(&a[0], &a[0] + 3));
}