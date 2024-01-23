#include <iostream>

using namespace std;

int main() {
    const int SIZE = 8;
    int list[SIZE];
    string result;
    for (int i = 0; i < SIZE; i++) {
        cin >> list[i];
    }

    for (int i = 0; i < SIZE - 1; i++) {

        if ((list[i] - list[i + 1]) == -1) {
            result = "ascending";
        }
        else if ((list[i] - list[i + 1]) == 1) {
            result = "descending";
        }
        else {
            result = "mixed";
            break;
        }
    }

    cout << result << endl;
}