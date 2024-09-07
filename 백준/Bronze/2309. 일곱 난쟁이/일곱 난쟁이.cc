#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num[9];
    int total = 0;
    bool find = false;
    
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        total += num[i];
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = (i + 1); j < 9; j++) {
            if ((num[i] + num[j]) == (total - 100)) {
                num[i] = 0;
                num[j] = 0;
                find = true;
                break;
            }
        }
        if (find == true) break;
    }
    
    sort(num, num + 9);
    
    for (int i = 0; i < 9; i++) {
        if (num[i] != 0) cout << num[i] << endl;
    }

    
    return 0;
}