#include <iostream>

using namespace std;

int main() {
    string S;
    int T, R;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> R >> S;
        for (auto j : S) {
            for (int k = 0; k < R; k++) {
                cout << j;
            }
        }
        cout << endl;
    }
}