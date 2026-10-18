#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++)
        cin >> a[i];

    for (int i = 0; i < n2; i++)
        cin >> b[i];

    for (int i = 0; i <= n1 - n2; i++) {
        bool same = true;

        for (int j = 0; j < n2; j++) {
            if (a[i + j] != b[j]) {
                same = false;
                break;
            }
        }

        if (same) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";
    return 0;
}