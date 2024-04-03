#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	int count = 0;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (i != 0 && i != s.size() - 1 && s[i] == ' ') count++;
	}

	if (s.size() == 0 || (s[0] == ' ' && s.size() == 1)) cout << count;
	else cout << count + 1;
}