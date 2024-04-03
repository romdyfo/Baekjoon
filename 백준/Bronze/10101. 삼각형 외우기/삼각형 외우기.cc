#include <iostream>

using namespace std;

int main() {
	int A1, A2, A3;

	cin >> A1 >> A2 >> A3;
	int total = A1 + A2 + A3;

	if (A1 == 60 && A2 == 60 && A3 == 60) cout << "Equilateral\n";
	else if (total == 180 && (A1 == A2 || A1 == A3 || A2 == A3)) cout << "Isosceles\n";
	else if (total == 180 && !(A1 == A2 || A1 == A3 || A2 == A3)) cout << "Scalene\n";
	else if (total != 180) cout << "Error\n";
}