#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    return a.length() < b.length();
}

int main()
{
    vector<string> v;
    string s;
    int N;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> s;
        v.push_back(s);
    }
    
    sort(v.begin(), v.end(), compare);
    
    //중복 요소 제거
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}