#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;

    int t = N;
    for (int i = 0; i < N; i++) {
        cout << setw(t);
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        t -= 1;
        cout << endl;
    }

    t = 2;
    for (int i = N - 1; i > 0; i--) {
        cout << setw(t);
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        t += 1;
        cout << endl;
    }
}