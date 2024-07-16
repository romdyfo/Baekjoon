#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    int n;
    bool isVPS = true;

    cin >> n;

    vector<char> v;

    for (int i = 0; i < n; i++) {
        cin >> s;
        isVPS = true;
        
        for (char c : s) {
            if (c == '(') v.push_back(c);
            if (c == ')') {
                if (v.empty()) { 
                    isVPS = false;
                    break;
                }
                v.pop_back();
            }
        }

        if (isVPS == false && v.empty()) {
            cout << "NO" << endl;
        }
        else if (isVPS == true && v.empty()) {
            cout << "YES" << endl;
        }
        
        else {
            cout << "NO" << endl;
            v.clear();
        }
    }

    return 0;
}