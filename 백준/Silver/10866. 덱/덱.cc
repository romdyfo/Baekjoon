#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    string s;
    int N;
    deque<int> dq;
    
    cin >> N;
    cin.ignore();
    
    for (int i = 0; i< N; i++) {
        getline(cin, s);
        
        if (s.substr(0, 10) == "push_front") {
            int num = stoi(s.substr(11));
            dq.push_front(num);
        }
        
        else if (s.substr(0, 9) == "push_back") {
            int num = stoi(s.substr(10));
            dq.push_back(num);
        }
        
        else if (s == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else cout << -1 << endl;
        }
        
        else if (s == "pop_back") {
            if (!dq.empty()) {
            cout << dq.back() << endl;
            dq.pop_back();
            }
            else cout << -1 << endl;
        }
        
        else if (s == "size") cout << dq.size() << endl;
        else if (s == "empty") cout << dq.empty() << endl;
        else if (s == "front") {
            if (dq.empty()) cout << -1 << endl;
            else cout << dq.front() << endl;
        }
        else if (s == "back") {
            if (dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
        }
    }
    
    
    return 0;
}