#include <iostream>

using namespace std;

int main() {
	int A, B, max;
    cin >> A >> B;
    
	A = A / 100 + ((A % 100) / 10)*10 + (A % 10)*100;
    B = B / 100 + ((B % 100) / 10)*10 + (B % 10)*100;
    
    max = (A > B) ? A : B;

	cout << max << endl;
}